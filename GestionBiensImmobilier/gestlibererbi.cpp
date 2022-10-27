#include "gestlibererbi.h"
#include "ui_gestlibererbi.h"
#include "gestionnaire.h"
#include "fenetregestionnaire.h"
GestLibererBI::GestLibererBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestLibererBI)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Liberation de Bien Immobilier");
    setFixedSize(766, 375);
}

GestLibererBI::~GestLibererBI()
{
    delete ui;
}

void GestLibererBI::on_pushButtonLiberer_clicked()
{
    QString idBI = ui->lineEditIdBI->text();
    Gestionnaire gest;
    gest.libererBI(idBI);
    close();

    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}

void GestLibererBI::on_pushButtonAnnuler_clicked()
{
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}
