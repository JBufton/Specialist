/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *s_mainWindowGridLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *Controls;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QSpinBox *DropsPerTick;
    QGroupBox *BoidCreation;
    QGridLayout *gridLayout;
    QPushButton *DeletePlane;
    QLabel *label_2;
    QDoubleSpinBox *NewPlaneY;
    QDoubleSpinBox *WindX;
    QLabel *label;
    QDoubleSpinBox *BoxSizeX;
    QDoubleSpinBox *BoxSizeY;
    QDoubleSpinBox *WindY;
    QLabel *label_3;
    QPushButton *CreatePlane;
    QDoubleSpinBox *WindZ;
    QDoubleSpinBox *NewPlaneXSize;
    QLabel *label_7;
    QDoubleSpinBox *NewPlaneZSize;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_8;
    QDoubleSpinBox *NewPlaneXRot;
    QLabel *label_9;
    QLabel *label_10;
    QDoubleSpinBox *NewPlaneRoughness;
    QDoubleSpinBox *NewPlaneZRot;
    QDoubleSpinBox *BoxSizeZ;
    QDoubleSpinBox *NewPlaneX;
    QDoubleSpinBox *NewPlaneZ;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1125, 780);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        s_mainWindowGridLayout = new QGridLayout(centralwidget);
        s_mainWindowGridLayout->setObjectName(QStringLiteral("s_mainWindowGridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        s_mainWindowGridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        Controls = new QGroupBox(centralwidget);
        Controls->setObjectName(QStringLiteral("Controls"));
        gridLayout_2 = new QGridLayout(Controls);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        label_4 = new QLabel(Controls);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        DropsPerTick = new QSpinBox(Controls);
        DropsPerTick->setObjectName(QStringLiteral("DropsPerTick"));
        DropsPerTick->setValue(1);

        gridLayout_2->addWidget(DropsPerTick, 1, 0, 1, 1);


        s_mainWindowGridLayout->addWidget(Controls, 1, 1, 1, 1);

        BoidCreation = new QGroupBox(centralwidget);
        BoidCreation->setObjectName(QStringLiteral("BoidCreation"));
        gridLayout = new QGridLayout(BoidCreation);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        DeletePlane = new QPushButton(BoidCreation);
        DeletePlane->setObjectName(QStringLiteral("DeletePlane"));

        gridLayout->addWidget(DeletePlane, 2, 2, 1, 1);

        label_2 = new QLabel(BoidCreation);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        NewPlaneY = new QDoubleSpinBox(BoidCreation);
        NewPlaneY->setObjectName(QStringLiteral("NewPlaneY"));
        NewPlaneY->setMinimum(-99.99);
        NewPlaneY->setSingleStep(0.05);

        gridLayout->addWidget(NewPlaneY, 4, 2, 1, 1);

        WindX = new QDoubleSpinBox(BoidCreation);
        WindX->setObjectName(QStringLiteral("WindX"));
        WindX->setDecimals(5);
        WindX->setMinimum(-99.99);
        WindX->setSingleStep(1e-05);

        gridLayout->addWidget(WindX, 1, 1, 1, 1);

        label = new QLabel(BoidCreation);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        BoxSizeX = new QDoubleSpinBox(BoidCreation);
        BoxSizeX->setObjectName(QStringLiteral("BoxSizeX"));
        BoxSizeX->setSingleStep(0.1);
        BoxSizeX->setValue(2);

        gridLayout->addWidget(BoxSizeX, 12, 1, 1, 1);

        BoxSizeY = new QDoubleSpinBox(BoidCreation);
        BoxSizeY->setObjectName(QStringLiteral("BoxSizeY"));
        BoxSizeY->setSingleStep(0.1);
        BoxSizeY->setValue(2);

        gridLayout->addWidget(BoxSizeY, 12, 2, 1, 1);

        WindY = new QDoubleSpinBox(BoidCreation);
        WindY->setObjectName(QStringLiteral("WindY"));
        WindY->setDecimals(5);
        WindY->setMinimum(-99.99);
        WindY->setSingleStep(1e-05);

        gridLayout->addWidget(WindY, 1, 2, 1, 1);

        label_3 = new QLabel(BoidCreation);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        CreatePlane = new QPushButton(BoidCreation);
        CreatePlane->setObjectName(QStringLiteral("CreatePlane"));

        gridLayout->addWidget(CreatePlane, 2, 1, 1, 1);

        WindZ = new QDoubleSpinBox(BoidCreation);
        WindZ->setObjectName(QStringLiteral("WindZ"));
        WindZ->setDecimals(5);
        WindZ->setMinimum(-99.99);
        WindZ->setSingleStep(1e-05);

        gridLayout->addWidget(WindZ, 1, 3, 1, 1);

        NewPlaneXSize = new QDoubleSpinBox(BoidCreation);
        NewPlaneXSize->setObjectName(QStringLiteral("NewPlaneXSize"));
        NewPlaneXSize->setSingleStep(0.05);
        NewPlaneXSize->setValue(1);

        gridLayout->addWidget(NewPlaneXSize, 6, 1, 1, 1);

        label_7 = new QLabel(BoidCreation);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 3, 1, 1);

        NewPlaneZSize = new QDoubleSpinBox(BoidCreation);
        NewPlaneZSize->setObjectName(QStringLiteral("NewPlaneZSize"));
        NewPlaneZSize->setSingleStep(0.05);
        NewPlaneZSize->setValue(1);

        gridLayout->addWidget(NewPlaneZSize, 6, 2, 1, 1);

        label_11 = new QLabel(BoidCreation);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 7, 2, 1, 1);

        label_12 = new QLabel(BoidCreation);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 9, 1, 1, 1);

        label_8 = new QLabel(BoidCreation);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 5, 1, 1, 1);

        NewPlaneXRot = new QDoubleSpinBox(BoidCreation);
        NewPlaneXRot->setObjectName(QStringLiteral("NewPlaneXRot"));

        gridLayout->addWidget(NewPlaneXRot, 8, 1, 1, 1);

        label_9 = new QLabel(BoidCreation);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 5, 2, 1, 1);

        label_10 = new QLabel(BoidCreation);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 7, 1, 1, 1);

        NewPlaneRoughness = new QDoubleSpinBox(BoidCreation);
        NewPlaneRoughness->setObjectName(QStringLiteral("NewPlaneRoughness"));

        gridLayout->addWidget(NewPlaneRoughness, 10, 1, 1, 1);

        NewPlaneZRot = new QDoubleSpinBox(BoidCreation);
        NewPlaneZRot->setObjectName(QStringLiteral("NewPlaneZRot"));

        gridLayout->addWidget(NewPlaneZRot, 8, 2, 1, 1);

        BoxSizeZ = new QDoubleSpinBox(BoidCreation);
        BoxSizeZ->setObjectName(QStringLiteral("BoxSizeZ"));
        BoxSizeZ->setSingleStep(0.1);
        BoxSizeZ->setValue(2);

        gridLayout->addWidget(BoxSizeZ, 12, 3, 1, 1);

        NewPlaneX = new QDoubleSpinBox(BoidCreation);
        NewPlaneX->setObjectName(QStringLiteral("NewPlaneX"));
        NewPlaneX->setMinimum(-99.99);
        NewPlaneX->setSingleStep(0.05);

        gridLayout->addWidget(NewPlaneX, 4, 1, 1, 1);

        NewPlaneZ = new QDoubleSpinBox(BoidCreation);
        NewPlaneZ->setObjectName(QStringLiteral("NewPlaneZ"));
        NewPlaneZ->setMinimum(-99.99);
        NewPlaneZ->setSingleStep(0.05);

        gridLayout->addWidget(NewPlaneZ, 4, 3, 1, 1);

        label_6 = new QLabel(BoidCreation);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 2, 1, 1);

        label_5 = new QLabel(BoidCreation);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        label_13 = new QLabel(BoidCreation);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 11, 1, 1, 1);

        label_14 = new QLabel(BoidCreation);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 11, 2, 1, 1);

        label_15 = new QLabel(BoidCreation);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 11, 3, 1, 1);


        s_mainWindowGridLayout->addWidget(BoidCreation, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1125, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Flocking System: Joshua Bufton", 0));
        Controls->setTitle(QApplication::translate("MainWindow", "Other Controls", 0));
        label_4->setText(QApplication::translate("MainWindow", "Number of Drops to create per frame", 0));
        BoidCreation->setTitle(QApplication::translate("MainWindow", "Controls", 0));
        DeletePlane->setText(QApplication::translate("MainWindow", "Delete Plane", 0));
        label_2->setText(QApplication::translate("MainWindow", "Wind Y Direction", 0));
        label->setText(QApplication::translate("MainWindow", "Wind X Direction", 0));
        label_3->setText(QApplication::translate("MainWindow", "Wind Z Direction", 0));
        CreatePlane->setText(QApplication::translate("MainWindow", "Create Plane", 0));
        label_7->setText(QApplication::translate("MainWindow", "NewPlaneZ", 0));
        label_11->setText(QApplication::translate("MainWindow", "NewPlaneZRot", 0));
        label_12->setText(QApplication::translate("MainWindow", "NewPlaneRoughness", 0));
        label_8->setText(QApplication::translate("MainWindow", "NewPlaneXSize", 0));
        label_9->setText(QApplication::translate("MainWindow", "NewPlaneZSize", 0));
        label_10->setText(QApplication::translate("MainWindow", "NewPlaneXRot", 0));
        label_6->setText(QApplication::translate("MainWindow", "NewPlaneY", 0));
        label_5->setText(QApplication::translate("MainWindow", "NewPlaneX", 0));
        label_13->setText(QApplication::translate("MainWindow", "BoxSizeX", 0));
        label_14->setText(QApplication::translate("MainWindow", "BoxSizeY", 0));
        label_15->setText(QApplication::translate("MainWindow", "BoxSizeZ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
