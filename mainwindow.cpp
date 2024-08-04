#include "mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
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
  writeData();
  delete ui;
}

void MainWindow::on_pushButton_inputUser_clicked()
{
  users_.insert(ui->lineEdit_inputUser->text());
  ui->lineEdit_inputUser->setText("");
}

void MainWindow::on_pushButton_checkUser_clicked()
{
  bool check = false;
  for (const auto& el : users_)
  {

    if (el == ui->lineEdit_checkUser->text())
    {
      secUi->show();
      secUi->ui->label_Name->setText(el);
      check = true;
    }
  }
  if (!check)
  {
    QMessageBox::critical(this, "ERROR", "Ученик: " + ui->lineEdit_checkUser->text() + " не был найден!");
  }
}

void MainWindow::on_pushButton_readFile_clicked()
{
  QString path;
  path =
    QFileDialog::getOpenFileName(this, "Выбрать файл", "C:/Users/katagiri/Documents/mother_project", "All Files (*.*)");
  QFile file(path);
  if (!file.open(QIODevice::ReadOnly))
  {
    QMessageBox::critical(this, "Ошибка", "Не можем открыть данный файл!");
  }
  QTextStream in(&file);
  while (in.atEnd() == false)
  {
    users_.insert(in.readLine());
  }
  file.close();
}
