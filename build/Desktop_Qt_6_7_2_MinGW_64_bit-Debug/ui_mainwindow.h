/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_inputUser;
    QPushButton *pushButton_inputUser;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_checkUser;
    QPushButton *pushButton_checkUser;
    QPushButton *pushButton_readFile;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_delUser;
    QPushButton *pushButton_delUser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 220, 161, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 240, 201, 31));
        label_2->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 270, 191, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_inputUser = new QLineEdit(layoutWidget);
        lineEdit_inputUser->setObjectName("lineEdit_inputUser");

        verticalLayout_2->addWidget(lineEdit_inputUser);

        pushButton_inputUser = new QPushButton(layoutWidget);
        pushButton_inputUser->setObjectName("pushButton_inputUser");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton_inputUser->setFont(font1);

        verticalLayout_2->addWidget(pushButton_inputUser);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(460, 270, 211, 111));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_checkUser = new QLineEdit(layoutWidget1);
        lineEdit_checkUser->setObjectName("lineEdit_checkUser");

        verticalLayout->addWidget(lineEdit_checkUser);

        pushButton_checkUser = new QPushButton(layoutWidget1);
        pushButton_checkUser->setObjectName("pushButton_checkUser");
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton_checkUser->setFont(font2);

        verticalLayout->addWidget(pushButton_checkUser);

        pushButton_readFile = new QPushButton(centralwidget);
        pushButton_readFile->setObjectName("pushButton_readFile");
        pushButton_readFile->setGeometry(QRect(320, 100, 151, 61));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(300, 430, 221, 61));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_delUser = new QLineEdit(widget);
        lineEdit_delUser->setObjectName("lineEdit_delUser");

        verticalLayout_3->addWidget(lineEdit_delUser);

        pushButton_delUser = new QPushButton(widget);
        pushButton_delUser->setObjectName("pushButton_delUser");
        QFont font3;
        font3.setBold(true);
        pushButton_delUser->setFont(font3);

        verticalLayout_3->addWidget(pushButton_delUser);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input Name User", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Find User", nullptr));
        pushButton_inputUser->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_checkUser->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButton_readFile->setText(QCoreApplication::translate("MainWindow", "Read The File", nullptr));
        pushButton_delUser->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
