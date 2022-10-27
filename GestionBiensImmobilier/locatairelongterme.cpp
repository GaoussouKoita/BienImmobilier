#include "locatairelongterme.h"
#include "ui_locatairelongterme.h"
#include "gestionnaire.h"
#include "gestaffecterbi.h"
#include "fenetregestionnaire.h"
LocataireLongTerme::LocataireLongTerme(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LocataireLongTerme)
{
    ui->setupUi(this);
    setFixedSize(572, 451);
    setWindowTitle("Location à Long Terme");
}

LocataireLongTerme::~LocataireLongTerme()
{
    delete ui;
}

void LocataireLongTerme::on_pushButtonEnregistre_clicked()
{
    QString date = ui->dateEditDate->text();
    QString montant = ui->lineEditMontant->text();
    QString idBI = ui->lineEditIdBI->text();

    QString idLocataire = "021";
    Gestionnaire gestionnaire;
    gestionnaire.enregistrePayement(date, montant, idLocataire, idBI);
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}

void LocataireLongTerme::on_pushButtonAnnuler_clicked()
{
    close();
    GestAffecterBI *fen;
    fen = new GestAffecterBI(this);
    fen->show();
}
