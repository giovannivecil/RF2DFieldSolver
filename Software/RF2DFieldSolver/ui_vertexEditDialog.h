/********************************************************************************
** Form generated from reading UI file 'vertexEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERTEXEDITDIALOG_H
#define UI_VERTEXEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "CustomWidgets/siunitedit.h"

QT_BEGIN_NAMESPACE

class Ui_VertexEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    SIUnitEdit *xpos;
    QLabel *label_2;
    SIUnitEdit *ypos;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VertexEditDialog)
    {
        if (VertexEditDialog->objectName().isEmpty())
            VertexEditDialog->setObjectName(QString::fromUtf8("VertexEditDialog"));
        VertexEditDialog->setWindowModality(Qt::ApplicationModal);
        VertexEditDialog->resize(261, 107);
        verticalLayout = new QVBoxLayout(VertexEditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(VertexEditDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        xpos = new SIUnitEdit(VertexEditDialog);
        xpos->setObjectName(QString::fromUtf8("xpos"));

        formLayout->setWidget(0, QFormLayout::FieldRole, xpos);

        label_2 = new QLabel(VertexEditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        ypos = new SIUnitEdit(VertexEditDialog);
        ypos->setObjectName(QString::fromUtf8("ypos"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ypos);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(VertexEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(VertexEditDialog);

        QMetaObject::connectSlotsByName(VertexEditDialog);
    } // setupUi

    void retranslateUi(QDialog *VertexEditDialog)
    {
        VertexEditDialog->setWindowTitle(QCoreApplication::translate("VertexEditDialog", "Vertex Coordinates", nullptr));
        label->setText(QCoreApplication::translate("VertexEditDialog", "X coordinate:", nullptr));
        label_2->setText(QCoreApplication::translate("VertexEditDialog", "Y coordinate:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VertexEditDialog: public Ui_VertexEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERTEXEDITDIALOG_H
