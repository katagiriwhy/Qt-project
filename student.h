#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>

namespace Ui
{
  class Student;
}

class Student: public QDialog
{
  Q_OBJECT

public:
  explicit Student(QWidget* parent = nullptr);
  void summarise();
  void countDays();
  Ui::Student* ui;
  int days{};
  ~Student();

private slots:

  void slotCalendar();
  void slotCalendar2();
  void slotCalendar3();
  void slotCalendar4();
  void slotCalendar5();
  void slotCalendar6();
  void slotCalendar7();

private:
};

#endif
