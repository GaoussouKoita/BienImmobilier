#include "gestaffecterbi.h"
#include "ui_gestaffecterbi.h"
#include "fenetregestionnaire.h"
#include "gestionnaire.h"
GestAffecterBI::GestAffecterBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestAffecterBI)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Affectation de Bien Immobilier");
    setFixedSize(685, 590);
}

GestAffecterBI::~GestAffecterBI()
{
    delete ui;
}

void GestAffecterBI::on_pushButtonAnnuler_clicked()
{
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}

void GestAffecterBI::on_pushButtonAffecter_clicked()
{
    QString nom = ui->lineEditNom->text();
    QString prenom = ui->lineEditPrenom->text();
    QString numeroPiece = ui->lineEditNumPiece->text();
    QString contact = ui->lineEditContact->text();
    QString email = ui->lineEditEMail->text();
    QString sexe = ui->comboBoxSexe->currentText();
    QString dateNaiss = ui->dateEditDateDeNaissance->text();
    QString id_BI = ui->lineEditIdBien->text();

    QString typeLocation = ui->comboBoxTypeLocation->currentText();

    Gestionnaire gestionnaire;
    gestionnaire.affecterBI(nom, prenom,numeroPiece, contact, email, sexe, dateNaiss,typeLocation,id_BI);

            close();
            GestEnregistrerPaye *gestPaye = new GestEnregistrerPaye(this);
            gestPaye->show();

}
