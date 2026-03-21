#include "customcoplanarmicrostrip.h"

#include "ui_scenario.h"

CustomCoplanarMicrostrip::CustomCoplanarMicrostrip()
{
    name = "Coplanar Microstrip";
    width = 0.3e-3;
    deltaW = 0.04e-3;
    gap = 0.3e-3;
    height = 35e-6;
    substrate_heightA = 0.2e-3;
    substrate_heightB = 0.2e-3;
    e_rA = 4.1;
    e_rB = 4.1;
    bottomGnd = true;
    // create parameters
    parameters.push_back({.name = "Trace Width (w)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &width});
    parameters.push_back({.name = "Trace w - w_top (DeltaW)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &deltaW});
    parameters.push_back({.name = "Trace Height (t)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &height});
    parameters.push_back({.name = "Gap Width (s)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &gap});
    parameters.push_back({.name = "Substrate A Height (h1)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &substrate_heightA});
    parameters.push_back({.name = "Substrate A dielectric constant", .unit = "", .prefixes = " ", .precision = 3, .value = &e_rA});
    parameters.push_back({.name = "Substrate B Height (h2)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &substrate_heightB});
    parameters.push_back({.name = "Substrate B dielectric constant", .unit = "", .prefixes = " ", .precision = 3, .value = &e_rB});
}

ElementList *CustomCoplanarMicrostrip::createScenario()
{
    auto list = new ElementList();

    if(ui->autoArea->isChecked()) {
        ui->xleft->setValue(-std::max({(substrate_heightA + substrate_heightB) * 5, width, gap}));
        ui->xright->setValue(std::max({(substrate_heightA + substrate_heightB) * 5, width, gap}));
        ui->ytop->setValue(5 * (substrate_heightA + substrate_heightB));
        ui->ybottom->setValue(-(substrate_heightA + substrate_heightB)-0.1e-3);
        if(!bottomGnd){
            ui->ybottom->setValue(-5 * (substrate_heightA + substrate_heightB));
        }
    }

    auto trace = new Element(Element::Type::TracePos);
    trace->appendVertex(QPointF(-width/2, 0));
    trace->appendVertex(QPointF(width/2, 0));
    trace->appendVertex(QPointF(width/2 - deltaW/2, height));
    trace->appendVertex(QPointF(-width/2 + deltaW/2, height));
    list->addElement(trace);

    // coplanar GNDs
    auto gnd1 = new Element(Element::Type::GND);
    gnd1->appendVertex(QPointF(-width - width/2 - gap, 0));
    gnd1->appendVertex(QPointF(-width/2 - gap, 0));
    gnd1->appendVertex(QPointF(-width/2 - gap - deltaW/2, height));
    gnd1->appendVertex(QPointF(-(width - deltaW/2) - width/2 - gap, height));
    list->addElement(gnd1);

    auto gnd2 = new Element(Element::Type::GND);
    gnd2->appendVertex(QPointF(width/2 + gap, 0));
    gnd2->appendVertex(QPointF(width + width/2 + gap, 0));
    gnd2->appendVertex(QPointF((width - deltaW/2) + width/2 + gap, height));
    gnd2->appendVertex(QPointF(width/2 + gap + deltaW/2, height));
    list->addElement(gnd2);

    auto substrateA = new Element(Element::Type::Dielectric);
    substrateA->setName("Substrate A");
    substrateA->setEpsilonR(e_rA);
    substrateA->appendVertex(QPointF(ui->xleft->value(), 0));
    substrateA->appendVertex(QPointF(ui->xright->value(), 0));
    substrateA->appendVertex(QPointF(ui->xright->value(), -substrate_heightA));
    substrateA->appendVertex(QPointF(ui->xleft->value(), -substrate_heightA));
    list->addElement(substrateA);

    if (substrate_heightB != 0){
        auto substrateB = new Element(Element::Type::Dielectric);
        substrateB->setName("Substrate B");
        substrateB->setEpsilonR(e_rB);
        substrateB->appendVertex(QPointF(ui->xleft->value(), -substrate_heightA));
        substrateB->appendVertex(QPointF(ui->xright->value(), -substrate_heightA));
        substrateB->appendVertex(QPointF(ui->xright->value(), -(substrate_heightA + substrate_heightB)));
        substrateB->appendVertex(QPointF(ui->xleft->value(), -(substrate_heightA + substrate_heightB)));
        list->addElement(substrateB);
    }

    if (bottomGnd){
        auto gnd = new Element(Element::Type::GND);
        gnd->appendVertex(QPointF(ui->xleft->value(), -(substrate_heightA + substrate_heightB)));
        gnd->appendVertex(QPointF(ui->xright->value(), -(substrate_heightA + substrate_heightB)));
        gnd->appendVertex(QPointF(ui->xright->value(), -(substrate_heightA + substrate_heightB)-0.1e-3));
        gnd->appendVertex(QPointF(ui->xleft->value(), -(substrate_heightA + substrate_heightB)-0.1e-3));
        list->addElement(gnd);
    }

    return list;
}

QPixmap CustomCoplanarMicrostrip::getImage()
{
    return QPixmap(":/images/custom_coplanar_microstrip.png");
}

void CustomCoplanarMicrostrip::setupParameters()
{
    Scenario::setupParameters();
    
    // Add custom checkbox for bottom ground plane
    auto layout = static_cast<QFormLayout*>(ui->parameters->layout());
    auto checkBox = new QCheckBox("Bottom GND plane");
    checkBox->setChecked(bottomGnd);
    connect(checkBox, &QCheckBox::toggled, this, [this](bool checked) {
        bottomGnd = checked;
    });
    layout->addRow("Ground Plane:", checkBox);
}

