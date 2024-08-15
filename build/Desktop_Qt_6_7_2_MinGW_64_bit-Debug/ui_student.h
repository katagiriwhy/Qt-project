/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QLabel *label_Name;
    QCalendarWidget *calendarWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_Monday;
    QCheckBox *checkBox_Tuesday;
    QCheckBox *checkBox_Wednesday;
    QCheckBox *checkBox_Thursday;
    QCheckBox *checkBox_Friday;
    QCheckBox *checkBox_Saturday;
    QCheckBox *checkBox_Sunday;
    QTableView *tableView;
    QPushButton *pushButton_add;
    QPushButton *pushButton_delete;
    QPlainTextEdit *comment_zone;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_sumInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_finalSum;
    QCheckBox *paidCheck;
    QLabel *label_counterDays;

    void setupUi(QDialog *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName("Student");
        Student->resize(741, 386);
        label_Name = new QLabel(Student);
        label_Name->setObjectName("label_Name");
        label_Name->setGeometry(QRect(370, 10, 141, 31));
        calendarWidget = new QCalendarWidget(Student);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(120, 40, 251, 181));
        calendarWidget->setGridVisible(false);
        calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        layoutWidget = new QWidget(Student);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 60, 88, 192));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_Monday = new QCheckBox(layoutWidget);
        checkBox_Monday->setObjectName("checkBox_Monday");

        verticalLayout->addWidget(checkBox_Monday);

        checkBox_Tuesday = new QCheckBox(layoutWidget);
        checkBox_Tuesday->setObjectName("checkBox_Tuesday");

        verticalLayout->addWidget(checkBox_Tuesday);

        checkBox_Wednesday = new QCheckBox(layoutWidget);
        checkBox_Wednesday->setObjectName("checkBox_Wednesday");

        verticalLayout->addWidget(checkBox_Wednesday);

        checkBox_Thursday = new QCheckBox(layoutWidget);
        checkBox_Thursday->setObjectName("checkBox_Thursday");

        verticalLayout->addWidget(checkBox_Thursday);

        checkBox_Friday = new QCheckBox(layoutWidget);
        checkBox_Friday->setObjectName("checkBox_Friday");

        verticalLayout->addWidget(checkBox_Friday);

        checkBox_Saturday = new QCheckBox(layoutWidget);
        checkBox_Saturday->setObjectName("checkBox_Saturday");

        verticalLayout->addWidget(checkBox_Saturday);

        checkBox_Sunday = new QCheckBox(layoutWidget);
        checkBox_Sunday->setObjectName("checkBox_Sunday");

        verticalLayout->addWidget(checkBox_Sunday);

        tableView = new QTableView(Student);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(390, 40, 256, 192));
        pushButton_add = new QPushButton(Student);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(460, 250, 101, 21));
        pushButton_delete = new QPushButton(Student);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(570, 250, 80, 24));
        comment_zone = new QPlainTextEdit(Student);
        comment_zone->setObjectName("comment_zone");
        comment_zone->setGeometry(QRect(380, 300, 261, 70));
        widget = new QWidget(Student);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 250, 225, 105));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_sumInput = new QLineEdit(widget);
        lineEdit_sumInput->setObjectName("lineEdit_sumInput");

        horizontalLayout->addWidget(lineEdit_sumInput);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        label_finalSum = new QLabel(widget);
        label_finalSum->setObjectName("label_finalSum");

        horizontalLayout_2->addWidget(label_finalSum);


        verticalLayout_2->addLayout(horizontalLayout_2);

        paidCheck = new QCheckBox(widget);
        paidCheck->setObjectName("paidCheck");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        paidCheck->setFont(font);

        verticalLayout_2->addWidget(paidCheck);


        verticalLayout_3->addLayout(verticalLayout_2);

        label_counterDays = new QLabel(widget);
        label_counterDays->setObjectName("label_counterDays");

        verticalLayout_3->addWidget(label_counterDays);


        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QDialog *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Dialog", nullptr));
        label_Name->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        checkBox_Monday->setText(QCoreApplication::translate("Student", "Monday", nullptr));
        checkBox_Tuesday->setText(QCoreApplication::translate("Student", "Tuesday", nullptr));
        checkBox_Wednesday->setText(QCoreApplication::translate("Student", "Wednesday", nullptr));
        checkBox_Thursday->setText(QCoreApplication::translate("Student", "Thursday", nullptr));
        checkBox_Friday->setText(QCoreApplication::translate("Student", "Friday", nullptr));
        checkBox_Saturday->setText(QCoreApplication::translate("Student", "Saturday", nullptr));
        checkBox_Sunday->setText(QCoreApplication::translate("Student", "Sunday", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Student", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Student", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Student", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Student", "\320\241\321\203\320\274\320\274\320\260 \320\267\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
        label_finalSum->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        paidCheck->setText(QCoreApplication::translate("Student", "\320\236\320\277\320\273\320\260\321\207\320\265\320\275\320\276 \320\267\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
        label_counterDays->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
