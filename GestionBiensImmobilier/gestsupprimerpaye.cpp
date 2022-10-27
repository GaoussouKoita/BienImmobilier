#include "gestsupprimerpaye.h"
#include "ui_gestsupprimerpaye.h"
#include "fenetregestionnaire.h"
#include "gestionnaire.h"
GestSupprimerPaye::GestSupprimerPaye(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestSupprimerPaye)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Suprresion de Payement");
    setFixedSize(594, 359);
}

GestSupprimerPaye::~GestSupprimerPaye()
{
    delete ui;
}

void GestSupprimerPaye::on_pushButtonAnnuler_clicked()
{
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}

void GestSupprimerPaye::on_pushButtonMettreAJour_clicked()
{
    QString idPayement = ui->lineEditIdPayement->text();
    Gestionnaire gestionnaire;
    gestionnaire.supprimerPayement(idPayement);
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}
