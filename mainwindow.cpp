#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include "QtCore"
#include "QtGui"
#include "QMessageBox"

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

float WartoscBud = 0.0;
float LiczbaMetrow = 0.0;
float KoncowaWartosc = 0.0;

void MainWindow::on_pushButton_4_clicked()
{
    QStringList zones;
    zones << "Budynek pasywny";
    zones << "Budynek energooszczedny";
    zones << "Nowoczesny budynek";
    zones << "Budynek bez izolacji";
    QString Z = QInputDialog::getItem(this, "RODZAJ", "Podaj rodzaj energetyczny:", zones);
    ui -> zone -> setText(Z);

    if(Z == "Budynek pasywny"){
        WartoscBud=15.0;
    }

    else if(Z == "Budynek energooszczedny"){
        WartoscBud = 40.0;
    }

    else if(Z == "Nowoczesny budynek"){
        WartoscBud = 85.0;
    }

    else if(Z == "Budynek bez izloacji"){
        WartoscBud = 120.0;
        }
}



void MainWindow::on_actionNew_triggered()
{
    QMessageBox::information(this,"title","New");
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

    LiczbaMetrow = wynik;
}







void MainWindow::on_pushButton_2_clicked()
{
KoncowaWartosc=WartoscBud*LiczbaMetrow;
ui->moc->setText(QString::number(KoncowaWartosc));
}






