/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame_2;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QSpinBox *spinBoxID;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBoxV;
    QLabel *label_10;
    QSpinBox *spinBoxX;
    QLabel *label_11;
    QSpinBox *spinBoxY;
    QLabel *label_12;
    QSpinBox *spinBoxR;
    QLabel *label_14;
    QLabel *label_13;
    QSpinBox *spinBoxG;
    QSpinBox *spinBoxB;
    QPushButton *pushButtonAI;
    QPushButton *pushButtonAF;
    QPushButton *pushButtonM;
    QWidget *page_2;
    QLabel *label;
    QPushButton *pushButtonRegresar;
    QPlainTextEdit *plainTextEditMostrar;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(552, 530);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 521, 471));
        page = new QWidget();
        page->setObjectName("page");
        frame_2 = new QFrame(page);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(130, 20, 241, 451));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(frame_2);
        formLayout_2->setObjectName("formLayout_2");
        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        spinBoxID = new QSpinBox(frame_2);
        spinBoxID->setObjectName("spinBoxID");
        spinBoxID->setMaximum(9999);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spinBoxID);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_9);

        doubleSpinBoxV = new QDoubleSpinBox(frame_2);
        doubleSpinBoxV->setObjectName("doubleSpinBoxV");
        doubleSpinBoxV->setDecimals(4);
        doubleSpinBoxV->setMaximum(9999.989999999999782);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, doubleSpinBoxV);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_10);

        spinBoxX = new QSpinBox(frame_2);
        spinBoxX->setObjectName("spinBoxX");
        spinBoxX->setMaximum(9999);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, spinBoxX);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_11);

        spinBoxY = new QSpinBox(frame_2);
        spinBoxY->setObjectName("spinBoxY");
        spinBoxY->setMaximum(9999);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, spinBoxY);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");

        formLayout_2->setWidget(13, QFormLayout::LabelRole, label_12);

        spinBoxR = new QSpinBox(frame_2);
        spinBoxR->setObjectName("spinBoxR");
        spinBoxR->setReadOnly(false);
        spinBoxR->setMaximum(255);

        formLayout_2->setWidget(13, QFormLayout::FieldRole, spinBoxR);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");

        formLayout_2->setWidget(14, QFormLayout::LabelRole, label_14);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");

        formLayout_2->setWidget(15, QFormLayout::LabelRole, label_13);

        spinBoxG = new QSpinBox(frame_2);
        spinBoxG->setObjectName("spinBoxG");
        spinBoxG->setReadOnly(false);
        spinBoxG->setMaximum(255);

        formLayout_2->setWidget(14, QFormLayout::FieldRole, spinBoxG);

        spinBoxB = new QSpinBox(frame_2);
        spinBoxB->setObjectName("spinBoxB");
        spinBoxB->setReadOnly(false);
        spinBoxB->setMaximum(255);

        formLayout_2->setWidget(15, QFormLayout::FieldRole, spinBoxB);

        pushButtonAI = new QPushButton(frame_2);
        pushButtonAI->setObjectName("pushButtonAI");

        formLayout_2->setWidget(16, QFormLayout::SpanningRole, pushButtonAI);

        pushButtonAF = new QPushButton(frame_2);
        pushButtonAF->setObjectName("pushButtonAF");

        formLayout_2->setWidget(17, QFormLayout::SpanningRole, pushButtonAF);

        pushButtonM = new QPushButton(frame_2);
        pushButtonM->setObjectName("pushButtonM");

        formLayout_2->setWidget(21, QFormLayout::SpanningRole, pushButtonM);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 151, 31));
        pushButtonRegresar = new QPushButton(page_2);
        pushButtonRegresar->setObjectName("pushButtonRegresar");
        pushButtonRegresar->setGeometry(QRect(230, 440, 80, 24));
        plainTextEditMostrar = new QPlainTextEdit(page_2);
        plainTextEditMostrar->setObjectName("plainTextEditMostrar");
        plainTextEditMostrar->setGeometry(QRect(10, 60, 511, 361));
        plainTextEditMostrar->setReadOnly(true);
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 49, 16));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 40, 49, 16));
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 40, 61, 16));
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(230, 40, 61, 16));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(330, 40, 21, 16));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(400, 40, 41, 16));
        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(480, 40, 31, 16));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 552, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        pushButtonAI->setText(QCoreApplication::translate("MainWindow", "Agregar Inicio", nullptr));
        pushButtonAF->setText(QCoreApplication::translate("MainWindow", "Agregar Final", nullptr));
        pushButtonM->setText(QCoreApplication::translate("MainWindow", "Mostrar Neuronas", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Neuronas Guardadas", nullptr));
        pushButtonRegresar->setText(QCoreApplication::translate("MainWindow", "Regresar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "RED", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "GREEN", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "BLUE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
