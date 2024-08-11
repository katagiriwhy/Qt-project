#include "student.h"
#include <QDate>
#include <QDebug>
#include <QSqlQuery>
#include "ui_student.h"

Student::Student(QWidget* parent):
  QDialog(parent),
  ui(new Ui::Student)
{
  ui->setupUi(this);
  db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("data.db");
  daysOfWeekCount = { 0, 0, 0, 0, 0, 0, 0 };
  if (db.open())
  {
    model = new QSqlTableModel(this, db);
    model->setTable("Students");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);
  }
  else
  {
    qDebug() << "Ошибка: " + db.lastError().databaseText();
  }
  ui->calendarWidget->setSelectedDate(QDate::currentDate());

  connect(ui->checkBox_Monday, &QCheckBox::clicked, this, &Student::onDayCheckBoxClicked);
  connect(ui->checkBox_Tuesday, &QCheckBox::clicked, this, &Student::onDayCheckBoxClicked);
  connect(ui->checkBox_Wednesday, &QCheckBox::clicked, this, &Student::onDayCheckBoxClicked);
  connect(ui->checkBox_Thursday, &QCheckBox::clicked, this, &Student::onDayCheckBoxClicked);
  connect(ui->checkBox_Friday, &QCheckBox::clicked, this, &Student::onDayCheckBoxClicked);
  connect(ui->checkBox_Saturday, &QCheckBox::clicked, this, &Student::onDayCheckBoxClicked);
  connect(ui->checkBox_Sunday, &QCheckBox::clicked, this, &Student::onDayCheckBoxClicked);

  connect(ui->lineEdit_sumInput, &QLineEdit::editingFinished, this, &Student::summarise);
}

void Student::summarise()
{
  QString studentName = ui->label_Name->text();
  QString sum = ui->lineEdit_sumInput->text();
  size_t totalSum = sum.toULongLong() * days;
  QSqlQuery query;
  query.prepare("UPDATE Students SET LessonsCount = :count, Price = :price, TotalSum = :total WHERE Name = :name");
  query.bindValue(":count", days);
  query.bindValue(":price", sum.toULongLong());
  query.bindValue(":total", totalSum);
  query.bindValue(":name", studentName);

  if (!query.exec())
  {
    qDebug() << "Ошибка обновления данных в базе: " + query.lastError().text();
  }
  ui->label_finalSum->setText(QString::number(totalSum));
}

Student::~Student()
{
  QList< QCheckBox* > checkboxes = this->findChildren< QCheckBox* >();
  for (QCheckBox* checkbox : checkboxes)
  {
    checkbox->setChecked(false);
  }
  db.close();
  delete ui;
}

void Student::onDayCheckBoxClicked(bool checked)
{
  QCheckBox* checkBox = qobject_cast< QCheckBox* >(sender());
  Qt::DayOfWeek dayOfWeek = Qt::DayOfWeek(-1);
  if (checkBox == ui->checkBox_Monday)
  {
    dayOfWeek = Qt::Monday;
  }
  else if (checkBox == ui->checkBox_Tuesday)
  {
    dayOfWeek = Qt::Tuesday;
  }
  else if (checkBox == ui->checkBox_Wednesday)
  {
    dayOfWeek = Qt::Wednesday;
  }
  else if (checkBox == ui->checkBox_Thursday)
  {
    dayOfWeek = Qt::Thursday;
  }
  else if (checkBox == ui->checkBox_Friday)
  {
    dayOfWeek = Qt::Friday;
  }
  else if (checkBox == ui->checkBox_Saturday)
  {
    dayOfWeek = Qt::Saturday;
  }
  else if (checkBox == ui->checkBox_Sunday)
  {
    dayOfWeek = Qt::Sunday;
  }
  if (checked)
  {
    countDays(dayOfWeek);
  }
  else
  {
    days -= daysOfWeekCount[dayOfWeek];
    daysOfWeekCount[dayOfWeek] = 0;
  }

  ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(days));
  ui->label_finalSum->setText(QString::number(ui->lineEdit_sumInput->text().toULongLong() * days));
}

void Student::countDays(Qt::DayOfWeek dayOfWeek)
{
  QDate currentDate = ui->calendarWidget->selectedDate();
  int tmp = 0;
  for (int day = 1; day <= currentDate.daysInMonth(); day++)
  {
    QDate date = QDate(currentDate.year(), currentDate.month(), day);
    if (date.dayOfWeek() == dayOfWeek)
    {
      tmp++;
    }
  }
  days += tmp;
  daysOfWeekCount[dayOfWeek] = tmp;
}

void Student::on_pushButton_add_clicked()
{
  model->submitAll();
}

void Student::on_tableView_clicked(const QModelIndex& index)
{
  currRow = index.row();
}

void Student::on_pushButton_delete_clicked()
{
  model->removeRow(currRow);
  model->select();
}
