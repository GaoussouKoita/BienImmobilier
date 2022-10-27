#include "fenetregestionnaire.h"
#include "ui_fenetregestionnaire.h"
#include <QMessageBox>
FenetreGestionnaire::FenetreGestionnaire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetreGestionnaire)
{
    ui->setupUi(this);
    setFixedSize(694, 692);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Gestionnaire de Bien Immobilier");
}

FenetreGestionnaire::~FenetreGestionnaire()
{
    delete ui;
}


void FenetreGestionnaire::on_pushButtonConsulter_clicked()
{
    hide();
    //gestConsulterBI = new GestConsulterBI(this);
    gestConsulterBI.show();
}

void FenetreGestionnaire::on_pushButtonEnregistrer_clicked()
{
    hide();
    //gestEnregistrePaye = new GestEnregistrerPaye(this);
    gestEnregistrePaye.show();
}

void FenetreGestionnaire::on_pushButtonAffecter_clicked()
{
    hide();
    //gestAffecterBI = new GestAffecterBI(this);
    gestAffecterBI.show();

}

void FenetreGestionnaire::on_pushButtonModifier_clicked()
{
    hide();
   // gestModifierPaye = new GestModifierPaye(this);
    gestModifierPaye.show();
}

void FenetreGestionnaire::on_pushButtonSupprimer_clicked()
{
    hide();
    //gestSupprimerPaye = new GestSupprimerPaye(this);
    gestSupprimerPaye.show();
}

void FenetreGestionnaire::on_pushButtonPaye_clicked()
{
    //gestConsulterStat.show();
     QMessageBox::information(this,"Info","En Cours de developpement !");
}

void FenetreGestionnaire::on_pushButtonArriere_clicked()
{
    QMessageBox::information(this,"Info","En Cours de developpement !");
    //gestConsulterStat.show();
}


void FenetreGestionnaire::on_pushButtonConsulterLocataire_clicked()
{
    close();
   // gestConsultLocataire =new GestConsulterLocataire(this);
    gestConsultLocataire.show();
}

void FenetreGestionnaire::on_pushButtonLibererBI_clicked()
{
    hide();
  //  gestLibereBI = new GestLibererBI(this);
    gestLibereBI.show();
}
