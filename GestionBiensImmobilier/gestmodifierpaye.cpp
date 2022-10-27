#include "gestmodifierpaye.h"
#include "ui_gestmodifierpaye.h"
#include "fenetregestionnaire.h"
#include "gestionnaire.h"
GestModifierPaye::GestModifierPaye(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestModifierPaye)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Modification de Payement");
    setFixedSize(627, 475);
}

GestModifierPaye::~GestModifierPaye()
{
    delete ui;
}

void GestModifierPaye::on_pushButtonAnnuler_clicked()
{
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}

void GestModifierPaye::on_pushButtonModifier_clicked()
{
    QString idPayement = ui->lineEditIdPayement->text();
    QString date = ui->dateEditDate->text();
    QString montant = ui->lineEditMontant->text();
    Gestionnaire gestionnaire;
    gestionnaire.modifierPayement(idPayement, date, montant);

    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}
