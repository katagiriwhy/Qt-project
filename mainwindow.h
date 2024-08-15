#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <unordered_set>
#include "student.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
  class MainWindow;
}
QT_END_NAMESPACE

class MainWindow: public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);

  void writeData();

  ~MainWindow();

private slots:
  void on_pushButton_inputUser_clicked();

  void on_pushButton_checkUser_clicked();

  void on_pushButton_readFile_clicked();

  void on_pushButton_delUser_clicked();

private:
  Ui::MainWindow* ui;
  Student* secUi;
  std::unordered_set< QString > users_;
};
#endif
