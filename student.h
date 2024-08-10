#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>

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
  void countDays(Qt::DayOfWeek dayOfWeek);
  void onDayCheckBoxClicked(bool checked);
  Ui::Student* ui;
  QSqlTableModel* model;
  QSqlDatabase db;
  ~Student();

private slots:

  void on_pushButton_add_clicked();

  void on_tableView_clicked(const QModelIndex& index);

  void on_pushButton_delete_clicked();

private:
  int days{};
  short currRow{};
  std::array< int, 7 > daysOfWeekCount;
};

#endif
