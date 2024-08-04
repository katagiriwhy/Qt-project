#include "student.h"
#include <QDate>
#include "ui_student.h"

Student::Student(QWidget* parent):
  QDialog(parent),
  ui(new Ui::Student)
{
  ui->setupUi(this);
  ui->calendarWidget->setSelectedDate(QDate::currentDate());
  connect(ui->checkBox_Monday, &QCheckBox::clicked, this, &Student::slotCalendar);
  connect(ui->checkBox_Tuesday, &QCheckBox::clicked, this, &Student::slotCalendar2);
  connect(ui->checkBox_Wednesday, &QCheckBox::clicked, this, &Student::slotCalendar3);
  connect(ui->checkBox_Thursday, &QCheckBox::clicked, this, &Student::slotCalendar4);
  connect(ui->checkBox_Friday, &QCheckBox::clicked, this, &Student::slotCalendar5);
  connect(ui->checkBox_Saturday, &QCheckBox::clicked, this, &Student::slotCalendar6);
  connect(ui->checkBox_Sunday, &QCheckBox::clicked, this, &Student::slotCalendar7);
}

void Student::summarise()
{
  QString sum = ui->lineEdit_sumInput->text();
  size_t tmp = sum.toULongLong() * days;
  ui->label_finalSum->setText(QString(QString::number(tmp)));
}

Student::~Student()
{
  delete ui;
}

void Student::slotCalendar()
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  static int tmp{};
  if (ui->checkBox_Monday->isChecked())
  {
    for (int day = 1; day <= currentDate.daysInMonth(); day++)
    {
      QDate date = QDate(currentDate.year(), currentDate.month(), day);
      if (date.dayOfWeek() == Qt::Monday)
      {
        tmp++;
      }
    }
    days += tmp;
  }
  else if (!ui->checkBox_Monday->isChecked())
  {
    days -= tmp;
    tmp -= tmp;
  }
  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}

void Student::slotCalendar2()
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  static int tmp2{};
  if (ui->checkBox_Tuesday->isChecked())
  {
    for (int day = 1; day <= currentDate.daysInMonth(); day++)
    {
      QDate date = QDate(currentDate.year(), currentDate.month(), day);
      if (date.dayOfWeek() == Qt::Tuesday)
      {
        tmp2++;
      }
    }
    days += tmp2;
  }
  else if (!ui->checkBox_Tuesday->isChecked())
  {
    days -= tmp2;
    tmp2 -= tmp2;
  }
  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}

void Student::slotCalendar3()
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  static int tmp2{};
  if (ui->checkBox_Wednesday->isChecked())
  {
    for (int day = 1; day <= currentDate.daysInMonth(); day++)
    {
      QDate date = QDate(currentDate.year(), currentDate.month(), day);
      if (date.dayOfWeek() == Qt::Wednesday)
      {
        tmp2++;
      }
    }
    days += tmp2;
  }
  else if (!ui->checkBox_Wednesday->isChecked())
  {
    days -= tmp2;
    tmp2 -= tmp2;
  }
  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}

void Student::slotCalendar4()
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  static int tmp2{};
  if (ui->checkBox_Thursday->isChecked())
  {
    for (int day = 1; day <= currentDate.daysInMonth(); day++)
    {
      QDate date = QDate(currentDate.year(), currentDate.month(), day);
      if (date.dayOfWeek() == Qt::Thursday)
      {
        tmp2++;
      }
    }
    days += tmp2;
  }
  else if (!ui->checkBox_Thursday->isChecked())
  {
    days -= tmp2;
    tmp2 -= tmp2;
  }
  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}

void Student::slotCalendar5()
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  static int tmp2{};
  if (ui->checkBox_Friday->isChecked())
  {
    for (int day = 1; day <= currentDate.daysInMonth(); day++)
    {
      QDate date = QDate(currentDate.year(), currentDate.month(), day);
      if (date.dayOfWeek() == Qt::Friday)
      {
        tmp2++;
      }
    }
    days += tmp2;
  }
  else if (!ui->checkBox_Friday->isChecked())
  {
    days -= tmp2;
    tmp2 -= tmp2;
  }
  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}

void Student::slotCalendar6()
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  static int tmp2{};
  if (ui->checkBox_Saturday->isChecked())
  {
    for (int day = 1; day <= currentDate.daysInMonth(); day++)
    {
      QDate date = QDate(currentDate.year(), currentDate.month(), day);
      if (date.dayOfWeek() == Qt::Saturday)
      {
        tmp2++;
      }
    }
    days += tmp2;
  }
  else if (!ui->checkBox_Saturday->isChecked())
  {
    days -= tmp2;
    tmp2 -= tmp2;
  }
  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}

void Student::slotCalendar7()
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  static int tmp2{};
  if (ui->checkBox_Sunday->isChecked())
  {
    for (int day = 1; day <= currentDate.daysInMonth(); day++)
    {
      QDate date = QDate(currentDate.year(), currentDate.month(), day);
      if (date.dayOfWeek() == Qt::Sunday)
      {
        tmp2++;
      }
    }
    days += tmp2;
  }
  else if (!ui->checkBox_Sunday->isChecked())
  {
    days -= tmp2;
    tmp2 -= tmp2;
  }
  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}
