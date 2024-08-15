#include "mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlQuery>
#include "ui_mainwindow.h"
#include "ui_student.h"

MainWindow::MainWindow(QWidget* parent):
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  secUi = new Student();
}

void MainWindow::writeData()
{
  QString path;
  path = QFileDialog::getOpenFileName(this, "Выбрать файл", "C:\\", "All Files (*.*)");
  QFile file(path);
  file.open(QIODevice::WriteOnly);
  if (!file.exists())
  {
    QMessageBox::warning(this, "Предупреждение", "Такой файл не существует!");
  }
  QTextStream out(&file);
  for (const auto& el : users_)
  {
    out << el;
  }
  file.close();
}

MainWindow::~MainWindow()
{
  // writeData();
  delete secUi;
  delete ui;
}

void MainWindow::on_pushButton_inputUser_clicked()
{
  QString studentName = ui->lineEdit_inputUser->text();
  users_.insert(studentName);
  QSqlQuery query;
  query.prepare("INSERT INTO students (name) VALUES (:name)");
  query.bindValue(":name", studentName);
  if (!query.exec())
  {
    QMessageBox::critical(this, "Ошибка", "Не удалось добавить ученика в базу данных: " + query.lastError().text());
  }
  else
  {
    QMessageBox::information(this, "Успех", "Студент успешно добавлен.");
  }
  ui->lineEdit_inputUser->setText("");
  secUi->model->select();
}

void MainWindow::on_pushButton_checkUser_clicked()
{
  QString studentName = ui->lineEdit_checkUser->text();
  QSqlQuery query;
  query.prepare("SELECT * FROM students WHERE name = :name");
  query.bindValue(":name", studentName);
  secUi->model->setFilter("name = '" + studentName + "'");
  if (query.exec())
  {
    if (query.next())
    {
      secUi->show();
      secUi->ui->label_Name->setText(studentName);
      secUi->ui->lineEdit_sumInput->setText(query.value("price").toString());
      secUi->days = query.value("lessons").toInt();
      secUi->ui->label_counterDays->setText("Количество занятий в месяце: " + QString::number(secUi->days));
      secUi->ui->label_finalSum->setText(query.value("sum").toString());
      secUi->ui->comment_zone->setPlainText(query.value("comments").toString());
      secUi->ui->paidCheck->setChecked(query.value("paid").toBool());
    }
    else
    {
      QMessageBox::critical(this, "Ошибка", "Ученик " + studentName + " не был найден!");
    }
  }
  else
  {
    QMessageBox::critical(this, "Ошибка", "Не удалось выполнить запрос: " + query.lastError().text());
  }
  // bool check = false;
  // for (const auto& el : users_)
  // {

  //   if (el == ui->lineEdit_checkUser->text())
  //   {
  //     secUi->show();
  //     secUi->ui->label_Name->setText(el);
  //     check = true;
  //   }
  // }
  // if (!check)
  // {
  //   QMessageBox::critical(this, "ERROR", "Ученик: " + ui->lineEdit_checkUser->text() + " не был найден!");
  // }
}

void MainWindow::on_pushButton_readFile_clicked()
{

  // QString path;
  // path =
  //   QFileDialog::getOpenFileName(this, "Выбрать файл", "C:/Users/katagiri/Documents/mother_project", "All Files
  //   (*.*)");
  // QFile file(path);
  // if (!file.open(QIODevice::ReadOnly))
  // {
  //   QMessageBox::critical(this, "Ошибка", "Не можем открыть данный файл!");
  // }
  // QTextStream in(&file);
  // while (in.atEnd() == false)
  // {
  //   users_.insert(in.readLine());
  // }
  // file.close();
}

void MainWindow::on_pushButton_delUser_clicked()
{
  QSqlQuery query(secUi->db);
  QString student = ui->lineEdit_delUser->text();
  query.prepare("DELETE FROM students WHERE name = :name");
  query.bindValue(":name", student);
  if (query.exec())
  {
    QMessageBox::information(this, "Удаление пользователя", "Ученик: " + student + " был удален!");
  }
  else
  {
    QMessageBox::critical(this, "Ошибка", "Ошибка удаления " + query.lastError().text());
  }
}
