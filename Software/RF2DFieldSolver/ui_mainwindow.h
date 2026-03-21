/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CustomWidgets/pcbview.h"
#include "CustomWidgets/siunitedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSet_Area;
    QAction *actionbla;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QTableView *table;
    QHBoxLayout *horizontalLayout;
    QPushButton *add;
    QPushButton *remove;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    PCBView *view;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    SIUnitEdit *xleft;
    SIUnitEdit *xright;
    QLabel *label_9;
    QLabel *label_10;
    SIUnitEdit *ytop;
    SIUnitEdit *ybottom;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    SIUnitEdit *gridsize;
    QCheckBox *showGrid;
    QCheckBox *snapGrid;
    QLabel *label_14;
    QCheckBox *showPotential;
    QLabel *label_16;
    QComboBox *viewMode;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    SIUnitEdit *resolution;
    QLabel *label_5;
    SIUnitEdit *tolerance;
    QLabel *label_6;
    QSpinBox *threads;
    QLabel *label_15;
    QCheckBox *borderIsGND;
    QLabel *label_17;
    SIUnitEdit *gaussDistance;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout;
    QLabel *label_22;
    SIUnitEdit *capacitanceN;
    SIUnitEdit *inductanceP;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_21;
    SIUnitEdit *inductanceN;
    SIUnitEdit *impedanceN;
    SIUnitEdit *impedanceP;
    QLabel *label_3;
    SIUnitEdit *capacitanceP;
    QLabel *label_19;
    SIUnitEdit *impedanceDiff;
    QProgressBar *progress;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *abort;
    QPushButton *update;
    QPlainTextEdit *status;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuPredefined_Scenarios;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(990, 1089);
        MainWindow->setAnimated(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSet_Area = new QAction(MainWindow);
        actionSet_Area->setObjectName(QString::fromUtf8("actionSet_Area"));
        actionbla = new QAction(MainWindow);
        actionbla->setObjectName(QString::fromUtf8("actionbla"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        table = new QTableView(groupBox_3);
        table->setObjectName(QString::fromUtf8("table"));
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add = new QPushButton(groupBox_3);
        add->setObjectName(QString::fromUtf8("add"));

        horizontalLayout->addWidget(add);

        remove = new QPushButton(groupBox_3);
        remove->setObjectName(QString::fromUtf8("remove"));

        horizontalLayout->addWidget(remove);


        verticalLayout_4->addLayout(horizontalLayout);

        splitter->addWidget(groupBox_3);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        view = new PCBView(groupBox_2);
        view->setObjectName(QString::fromUtf8("view"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(view);

        splitter->addWidget(groupBox_2);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        formLayout_3 = new QFormLayout(groupBox_5);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_8);

        xleft = new SIUnitEdit(groupBox_5);
        xleft->setObjectName(QString::fromUtf8("xleft"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, xleft);

        xright = new SIUnitEdit(groupBox_5);
        xright->setObjectName(QString::fromUtf8("xright"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, xright);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_10);

        ytop = new SIUnitEdit(groupBox_5);
        ytop->setObjectName(QString::fromUtf8("ytop"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, ytop);

        ybottom = new SIUnitEdit(groupBox_5);
        ybottom->setObjectName(QString::fromUtf8("ybottom"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, ybottom);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_13);

        gridsize = new SIUnitEdit(groupBox_5);
        gridsize->setObjectName(QString::fromUtf8("gridsize"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, gridsize);

        showGrid = new QCheckBox(groupBox_5);
        showGrid->setObjectName(QString::fromUtf8("showGrid"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, showGrid);

        snapGrid = new QCheckBox(groupBox_5);
        snapGrid->setObjectName(QString::fromUtf8("snapGrid"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, snapGrid);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_14);

        showPotential = new QCheckBox(groupBox_5);
        showPotential->setObjectName(QString::fromUtf8("showPotential"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, showPotential);

        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, label_16);

        viewMode = new QComboBox(groupBox_5);
        viewMode->addItem(QString());
        viewMode->addItem(QString());
        viewMode->setObjectName(QString::fromUtf8("viewMode"));

        formLayout_3->setWidget(8, QFormLayout::FieldRole, viewMode);


        verticalLayout_3->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        resolution = new SIUnitEdit(groupBox_4);
        resolution->setObjectName(QString::fromUtf8("resolution"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, resolution);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        tolerance = new SIUnitEdit(groupBox_4);
        tolerance->setObjectName(QString::fromUtf8("tolerance"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, tolerance);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        threads = new QSpinBox(groupBox_4);
        threads->setObjectName(QString::fromUtf8("threads"));
        threads->setMinimum(1);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, threads);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_15);

        borderIsGND = new QCheckBox(groupBox_4);
        borderIsGND->setObjectName(QString::fromUtf8("borderIsGND"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, borderIsGND);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_17);

        gaussDistance = new SIUnitEdit(groupBox_4);
        gaussDistance->setObjectName(QString::fromUtf8("gaussDistance"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, gaussDistance);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 0, 2, 1, 1);

        capacitanceN = new SIUnitEdit(groupBox_6);
        capacitanceN->setObjectName(QString::fromUtf8("capacitanceN"));
        capacitanceN->setEnabled(false);

        gridLayout->addWidget(capacitanceN, 1, 2, 1, 1);

        inductanceP = new SIUnitEdit(groupBox_6);
        inductanceP->setObjectName(QString::fromUtf8("inductanceP"));
        inductanceP->setEnabled(false);

        gridLayout->addWidget(inductanceP, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 0, 1, 1, 1);

        inductanceN = new SIUnitEdit(groupBox_6);
        inductanceN->setObjectName(QString::fromUtf8("inductanceN"));
        inductanceN->setEnabled(false);

        gridLayout->addWidget(inductanceN, 2, 2, 1, 1);

        impedanceN = new SIUnitEdit(groupBox_6);
        impedanceN->setObjectName(QString::fromUtf8("impedanceN"));
        impedanceN->setEnabled(false);

        gridLayout->addWidget(impedanceN, 3, 2, 1, 1);

        impedanceP = new SIUnitEdit(groupBox_6);
        impedanceP->setObjectName(QString::fromUtf8("impedanceP"));
        impedanceP->setEnabled(false);

        gridLayout->addWidget(impedanceP, 3, 1, 1, 1);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        capacitanceP = new SIUnitEdit(groupBox_6);
        capacitanceP->setObjectName(QString::fromUtf8("capacitanceP"));
        capacitanceP->setEnabled(false);

        gridLayout->addWidget(capacitanceP, 1, 1, 1, 1);

        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 4, 0, 1, 1);

        impedanceDiff = new SIUnitEdit(groupBox_6);
        impedanceDiff->setObjectName(QString::fromUtf8("impedanceDiff"));
        impedanceDiff->setEnabled(false);

        gridLayout->addWidget(impedanceDiff, 4, 1, 1, 2);


        verticalLayout->addWidget(groupBox_6);

        progress = new QProgressBar(groupBox);
        progress->setObjectName(QString::fromUtf8("progress"));
        progress->setValue(0);

        verticalLayout->addWidget(progress);

        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        abort = new QPushButton(groupBox);
        abort->setObjectName(QString::fromUtf8("abort"));
        abort->setEnabled(false);

        horizontalLayout_2->addWidget(abort);

        update = new QPushButton(groupBox);
        update->setObjectName(QString::fromUtf8("update"));

        horizontalLayout_2->addWidget(update);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        splitter->addWidget(layoutWidget);
        splitter_2->addWidget(splitter);
        status = new QPlainTextEdit(splitter_2);
        status->setObjectName(QString::fromUtf8("status"));
        status->setEnabled(true);
        status->setReadOnly(true);
        splitter_2->addWidget(status);

        verticalLayout_5->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 990, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuPredefined_Scenarios = new QMenu(menubar);
        menuPredefined_Scenarios->setObjectName(QString::fromUtf8("menuPredefined_Scenarios"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuPredefined_Scenarios->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RF 2D Field Solver", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSet_Area->setText(QCoreApplication::translate("MainWindow", "Set Area", nullptr));
        actionbla->setText(QCoreApplication::translate("MainWindow", "bla", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Elements", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PCB cross section", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "PCB Area/Grid", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "X left:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "X right:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Y top:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Y bottom:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Grid size:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Show grid:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Snap to grid:", nullptr));
        showGrid->setText(QString());
        snapGrid->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "Show potential:", nullptr));
        showPotential->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "View mode:", nullptr));
        viewMode->setItemText(0, QCoreApplication::translate("MainWindow", "Keep aspect ratio", nullptr));
        viewMode->setItemText(1, QCoreApplication::translate("MainWindow", "Fill whole area", nullptr));

        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Simulation Accuracy/Speed", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Grid resolution:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Field tolerance:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "CPU Threads:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Border is GND:", nullptr));
        borderIsGND->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "Distance Gauss Integral:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Results", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "RF+", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "RF-", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\316\264L:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\316\264C:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "RF+", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Impedance:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Differential:", nullptr));
        abort->setText(QCoreApplication::translate("MainWindow", "Abort", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuPredefined_Scenarios->setTitle(QCoreApplication::translate("MainWindow", "Predefined Scenarios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
