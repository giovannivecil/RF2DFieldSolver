#include "customcoplanardifferentialmicrostrip.h"

#include "ui_scenario.h"

CustomCoplanarDifferentialMicrostrip::CustomCoplanarDifferentialMicrostrip()
{
    name = "Custom Coplanar Differential Microstrip";
    width = 0.3e-3;
    deltaW = 0.04e-3;
    height = 35e-6;
    gapTrace = 0.2e-3;
    gapCoplanar = 0.3e-3;
    substrate_heightA = 0.2e-3;
    substrate_heightB = 0.2e-3;
    e_rA = 4.1;
    e_rB = 4.1;
    // create parameters
    parameters.push_back({.name = "Trace Width (w)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &width});
    parameters.push_back({.name = "Trace w - w_top (DeltaW)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &deltaW});
    parameters.push_back({.name = "Trace Height (t)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &height});
    parameters.push_back({.name = "Gap Width (s1)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &gapTrace});
    parameters.push_back({.name = "Gap Width (s2)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &gapCoplanar});
    parameters.push_back({.name = "Substrate A Height (h1)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &substrate_heightA});
    parameters.push_back({.name = "Substrate A dielectric constant", .unit = "", .prefixes = " ", .precision = 3, .value = &e_rA});
    parameters.push_back({.name = "Substrate B Height (h2)", .unit = "m", .prefixes = "um ", .precision = 4, .value = &substrate_heightB});
    parameters.push_back({.name = "Substrate B dielectric constant", .unit = "", .prefixes = " ", .precision = 3, .value = &e_rB});
}

ElementList *CustomCoplanarDifferentialMicrostrip::createScenario()
{
    auto list = new ElementList();

    if(ui->autoArea->isChecked()) {
        ui->xleft->setValue(-std::max({(substrate_heightA + substrate_heightB) * 5, (width+gapTrace/2) * 3, gapCoplanar * 4}));
        ui->xright->setValue(std::max({(substrate_heightA + substrate_heightB) * 5, (width+gapTrace/2) * 3, gapCoplanar * 4}));
        ui->ytop->setValue((substrate_heightA + substrate_heightB) * 5);
        ui->ybottom->setValue(-(substrate_heightA + substrate_heightB)-0.1e-3);
    }

    auto trace = new Element(Element::Type::TracePos);
    trace->appendVertex(QPointF(-width - gapTrace/2, 0));
    trace->appendVertex(QPointF(-gapTrace/2, 0));
    trace->appendVertex(QPointF(-gapTrace/2 - deltaW/2, height));
    trace->appendVertex(QPointF(-(width - deltaW/2) - gapTrace/2, height));
    list->addElement(trace);

    auto trace2 = new Element(Element::Type::TraceNeg);
    trace2->appendVertex(QPointF(gapTrace/2, 0));
    trace2->appendVertex(QPointF(gapTrace/2 + width, 0));
    trace2->appendVertex(QPointF(gapTrace/2 + (width - deltaW/2), height));
    trace2->appendVertex(QPointF(gapTrace/2 + deltaW/2, height));
    list->addElement(trace2);

    // coplanar GNDs
    auto gnd1 = new Element(Element::Type::GND);
    gnd1->appendVertex(QPointF(-gapTrace/2 - 2*width - gapCoplanar, 0));
    gnd1->appendVertex(QPointF(-gapTrace/2 - width - gapCoplanar, 0));
    gnd1->appendVertex(QPointF(-gapTrace/2 - width - deltaW/2 - gapCoplanar, height));
    gnd1->appendVertex(QPointF(-gapTrace/2 - 2*width + deltaW/2 - gapCoplanar, height));
    list->addElement(gnd1);

    auto gnd2 = new Element(Element::Type::GND);
    gnd2->appendVertex(QPointF(gapTrace/2 + width + gapCoplanar, 0));
    gnd2->appendVertex(QPointF(gapTrace/2 + 2*width + gapCoplanar, 0));
    gnd2->appendVertex(QPointF(gapTrace/2 + 2*width - deltaW/2 + gapCoplanar, height));
    gnd2->appendVertex(QPointF(gapTrace/2 + width + deltaW/2 + gapCoplanar, height));
    list->addElement(gnd2);

    auto substrateA = new Element(Element::Type::Dielectric);
    substrateA->setName("Substrate A");
    substrateA->setEpsilonR(e_rA);
    substrateA->appendVertex(QPointF(ui->xleft->value(), 0));
    substrateA->appendVertex(QPointF(ui->xright->value(), 0));
    substrateA->appendVertex(QPointF(ui->xright->value(), -substrate_heightA));
    substrateA->appendVertex(QPointF(ui->xleft->value(), -substrate_heightA));
    list->addElement(substrateA);

    auto substrateB = new Element(Element::Type::Dielectric);
    substrateB->setName("Substrate B");
    substrateB->setEpsilonR(e_rB);
    substrateB->appendVertex(QPointF(ui->xleft->value(), -substrate_heightA));
    substrateB->appendVertex(QPointF(ui->xright->value(), -substrate_heightA));
    substrateB->appendVertex(QPointF(ui->xright->value(), -(substrate_heightA + substrate_heightB)));
    substrateB->appendVertex(QPointF(ui->xleft->value(), -(substrate_heightA + substrate_heightB)));
    list->addElement(substrateB);

    auto gnd = new Element(Element::Type::GND);
    gnd->appendVertex(QPointF(ui->xleft->value(), -(substrate_heightA + substrate_heightB)));
    gnd->appendVertex(QPointF(ui->xright->value(), -(substrate_heightA + substrate_heightB)));
    gnd->appendVertex(QPointF(ui->xright->value(), -(substrate_heightA + substrate_heightB)-0.1e-3));
    gnd->appendVertex(QPointF(ui->xleft->value(), -(substrate_heightA + substrate_heightB)-0.1e-3));
    list->addElement(gnd);

    return list;
}

QPixmap CustomCoplanarDifferentialMicrostrip::getImage()
{
    return QPixmap(":/images/custom_coplanar_microstrip_differential.png");
}

