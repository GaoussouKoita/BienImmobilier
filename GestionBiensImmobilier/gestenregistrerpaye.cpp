#include "gestenregistrerpaye.h"
#include "ui_gestenregistrerpaye.h"
#include "fenetregestionnaire.h"
#include "gestionnaire.h"
GestEnregistrerPaye::GestEnregistrerPaye(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestEnregistrerPaye)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Engeristrement de Payement");
    setFixedSize(585, 410);
}

GestEnregistrerPaye::~GestEnregistrerPaye()
{
    delete ui;
}

void GestEnregistrerPaye::on_pushButtonAnnuler_clicked()
{
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}

void GestEnregistrerPaye::on_pushButtonEnregistre_clicked()
{
    QString date = ui->dateEditDate->text();
    QString montant = ui->lineEditMontant->text();
    QString nom = ui->lineEditNomLocataire->text();
    QString prenom = ui->lineEditPrenomLocataire->text();
    QString idBI = ui->lineEditIdBI->text();
    Gestionnaire gestionnaire;
    gestionnaire.enregistrePayement(date, montant, nom, prenom, idBI);
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}
