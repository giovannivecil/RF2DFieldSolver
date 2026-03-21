/********************************************************************************
** Form generated from reading UI file 'scenario.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENARIO_H
#define UI_SCENARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "CustomWidgets/siunitedit.h"

QT_BEGIN_NAMESPACE

class Ui_Scenario
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *image;
    QGroupBox *parameters;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *autoArea;
    QFormLayout *formLayout;
    QLabel *label_7;
    SIUnitEdit *xleft;
    QLabel *label_8;
    SIUnitEdit *xright;
    QLabel *label_9;
    SIUnitEdit *ytop;
    QLabel *label_10;
    SIUnitEdit *ybottom;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Scenario)
    {
        if (Scenario->objectName().isEmpty())
            Scenario->setObjectName(QString::fromUtf8("Scenario"));
        Scenario->resize(711, 361);
        verticalLayout_2 = new QVBoxLayout(Scenario);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        image = new QLabel(Scenario);
        image->setObjectName(QString::fromUtf8("image"));

        horizontalLayout->addWidget(image);

        parameters = new QGroupBox(Scenario);
        parameters->setObjectName(QString::fromUtf8("parameters"));

        horizontalLayout->addWidget(parameters);

        groupBox = new QGroupBox(Scenario);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        autoArea = new QCheckBox(groupBox);
        autoArea->setObjectName(QString::fromUtf8("autoArea"));

        verticalLayout->addWidget(autoArea);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        xleft = new SIUnitEdit(groupBox);
        xleft->setObjectName(QString::fromUtf8("xleft"));

        formLayout->setWidget(0, QFormLayout::FieldRole, xleft);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        xright = new SIUnitEdit(groupBox);
        xright->setObjectName(QString::fromUtf8("xright"));

        formLayout->setWidget(1, QFormLayout::FieldRole, xright);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_9);

        ytop = new SIUnitEdit(groupBox);
        ytop->setObjectName(QString::fromUtf8("ytop"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ytop);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_10);

        ybottom = new SIUnitEdit(groupBox);
        ybottom->setObjectName(QString::fromUtf8("ybottom"));

        formLayout->setWidget(3, QFormLayout::FieldRole, ybottom);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Scenario);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(Scenario);

        QMetaObject::connectSlotsByName(Scenario);
    } // setupUi

    void retranslateUi(QDialog *Scenario)
    {
        Scenario->setWindowTitle(QCoreApplication::translate("Scenario", "Dialog", nullptr));
        image->setText(QCoreApplication::translate("Scenario", "image", nullptr));
        parameters->setTitle(QCoreApplication::translate("Scenario", "Parameters", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Scenario", "Area", nullptr));
        autoArea->setText(QCoreApplication::translate("Scenario", "Auto", nullptr));
        label_7->setText(QCoreApplication::translate("Scenario", "X left:", nullptr));
        label_8->setText(QCoreApplication::translate("Scenario", "X right:", nullptr));
        label_9->setText(QCoreApplication::translate("Scenario", "Y top:", nullptr));
        label_10->setText(QCoreApplication::translate("Scenario", "Y bottom:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scenario: public Ui_Scenario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENARIO_H
