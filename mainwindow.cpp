#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->high->setText("");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int h = QInputDialog::getInt(this, "Wysokość", "Podaj wysokość pomieszczenia: [cm]");
    ui->high->setText(QString::number(h));
}


void MainWindow::on_pushButton_2_clicked()
{
    int l = QInputDialog::getInt(this, "Długość", "Podaj długość pomieszczenia: [cm]");
    ui->lenght->setText(QString::number(l));
}


void MainWindow::on_pushButton_3_clicked()
{
    int w = QInputDialog::getInt(this, "Szerokość", "Podaj szerokość pomieszczenia: [cm]");
    ui->width->setText(QString::number(w));
}


void MainWindow::on_pushButton_4_clicked()
{
    QStringList zones;
    zones << "Strefa klimatyczna I (-16C)";
    zones << "Strefa klimatyczna II (-18C)";
    zones << "Strefa klimatyczna III (-20C)";
    zones << "Strefa klimatyczna IV (-22C)";
    zones << "Strefa klimatyczna V (-24C)";
    QString Z = QInputDialog::getItem(this, "Strefa", "Podaj sterefe klimatyczną:", zones);
    ui -> zone -> setText(Z);

}

void MainWindow::on_pushButton_5_clicked()
{
    QStringList izo;
    izo << "Słaba";
    izo << "Średnia";
    izo << "Dobra";
    izo << "Bardzo dobra";
    QString I = QInputDialog::getItem(this, "Izolacja", "Podaj izloację cieplną pomieszczenia:", izo);
    ui -> izolation -> setText(I);
}




void MainWindow::on_pushButton_6_clicked()
{
    QStringList glass;
    glass << "Poniżej 10%";
    glass << "Od 10% do 20%";
    glass << "Powyżej 20%";
    glass << "Bez okien";
    QString G = QInputDialog::getItem(this, "Stopień", "Podaj stopień przeszklenia ścian zewnętrznych:", glass);
    ui -> glasslabel -> setText(G);
}


void MainWindow::on_pushButton_7_clicked()
{
    QStringList type;
    type << "Nowoczesne energooszczędne";
    type << "Tradycyjne w dobrym stanie";
    type << "Stare, zniszczone, nieszczelne";
    QString L = QInputDialog::getItem(this, "Rodzaj i jakość", "Podaj rodzaj i jakość przeszklenia:", type);
    ui -> typelabel -> setText(L);
}


void MainWindow::on_pushButton_8_clicked()
{
    QStringList room;
    room << "Garaż 12C";
    room << "Przedsionek 16C";
    room << "Pokój 20C";
    room << "Pokój 22C";
    room << "Łazienka 24C";
    QString R = QInputDialog::getItem(this, "Rodzaj", "Podaj rodzaj pomieszczenia:", room);
    ui -> roomlabel -> setText(R);
}


void MainWindow::on_pushButton_9_clicked()
{
    QStringList level;
    level << "Najwyższa kondygnacja";
    level << "Pośrednia kondygnacja";
    level << "Parter";
    QString V = QInputDialog::getItem(this, "Poziom", "Podaj kondygnację:", level);
    ui -> levellabel -> setText(V);
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui -> actionNew -> setText(QString());
}
