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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QLabel *label_Name;
    QLabel *label_2;
    QLabel *label_finalSum;
    QCalendarWidget *calendarWidget;
    QLabel *label_counterDays;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_Monday;
    QCheckBox *checkBox_Tuesday;
    QCheckBox *checkBox_Wednesday;
    QCheckBox *checkBox_Thursday;
    QCheckBox *checkBox_Friday;
    QCheckBox *checkBox_Saturday;
    QCheckBox *checkBox_Sunday;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_sumInput;
    QTableView *tableView;
    QPushButton *pushButton_add;
    QPushButton *pushButton_delete;

    void setupUi(QDialog *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName("Student");
        Student->resize(741, 386);
        label_Name = new QLabel(Student);
        label_Name->setObjectName("label_Name");
        label_Name->setGeometry(QRect(370, 10, 141, 31));
        label_2 = new QLabel(Student);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 300, 101, 16));
        label_finalSum = new QLabel(Student);
        label_finalSum->setObjectName("label_finalSum");
        label_finalSum->setGeometry(QRect(120, 300, 111, 16));
        calendarWidget = new QCalendarWidget(Student);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(120, 40, 251, 181));
        calendarWidget->setGridVisible(false);
        calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        label_counterDays = new QLabel(Student);
        label_counterDays->setObjectName("label_counterDays");
        label_counterDays->setGeometry(QRect(20, 330, 191, 41));
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

        layoutWidget1 = new QWidget(Student);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 270, 221, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_sumInput = new QLineEdit(layoutWidget1);
        lineEdit_sumInput->setObjectName("lineEdit_sumInput");

        horizontalLayout->addWidget(lineEdit_sumInput);

        tableView = new QTableView(Student);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(390, 40, 256, 192));
        pushButton_add = new QPushButton(Student);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(460, 250, 101, 21));
        pushButton_delete = new QPushButton(Student);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(570, 250, 80, 24));

        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QDialog *Student)
    {
        Student->setWindowTitle(QCoreApplication::translate("Student", "Dialog", nullptr));
        label_Name->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Student", "\320\241\321\203\320\274\320\274\320\260 \320\267\320\260 \320\274\320\265\321\201\321\217\321\206", nullptr));
        label_finalSum->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        label_counterDays->setText(QCoreApplication::translate("Student", "TextLabel", nullptr));
        checkBox_Monday->setText(QCoreApplication::translate("Student", "Monday", nullptr));
        checkBox_Tuesday->setText(QCoreApplication::translate("Student", "Tuesday", nullptr));
        checkBox_Wednesday->setText(QCoreApplication::translate("Student", "Wednesday", nullptr));
        checkBox_Thursday->setText(QCoreApplication::translate("Student", "Thursday", nullptr));
        checkBox_Friday->setText(QCoreApplication::translate("Student", "Friday", nullptr));
        checkBox_Saturday->setText(QCoreApplication::translate("Student", "Saturday", nullptr));
        checkBox_Sunday->setText(QCoreApplication::translate("Student", "Sunday", nullptr));
        label->setText(QCoreApplication::translate("Student", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Student", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Student", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
