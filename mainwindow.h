#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_actionNew_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile= "";
};
#endif // MAINWINDOW_H
