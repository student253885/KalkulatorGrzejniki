#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_4_clicked()
{
    QStringList zones;
    zones << "Budynek pasywny";
    zones << "Budynek energooszczedny";
    zones << "Nowoczesny budynek";
    zones << "Budynek bez izolacji";
    QString Z = QInputDialog::getItem(this, "RODZAJ", "Podaj rodzaj energetyczny:", zones);
    ui -> zone -> setText(Z);

}


void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui -> actionNew -> setText(QString());
}

void MainWindow::on_pushButton_clicked()
{

    QString tekst =ui->Szerokosc->text();
    QString tekst2 =ui->Dlugosc->text();

    float wynik = tekst.toFloat()* tekst2.toFloat();

    QString c = QString::number(wynik);

    ui->label->setText(c);
}




