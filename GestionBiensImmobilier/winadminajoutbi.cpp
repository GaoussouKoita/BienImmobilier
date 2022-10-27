#include "winadminajoutbi.h"
#include "ui_winadminajoutbi.h"
#include "fenetreadmin.h"
#include "administrator.h"
WinAdminAjoutBI::WinAdminAjoutBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminAjoutBI)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Ajout de Bien Immobilier");
    setFixedSize(760, 605);
}

WinAdminAjoutBI::~WinAdminAjoutBI()
{
    delete ui;
}

void WinAdminAjoutBI::on_pushButtonAjouter_clicked()
{
    QString adresse = ui->lineEditAdresse->text();
    QString montant = ui->lineEditMontant->text();
    QString type = ui->lineEditType->currentText();
    QString nbrePiece = ui->spinBoxNbrePiece->text();
    QString statut = ui->comboBox->currentText();
    QString details =ui->plainTextEditDetails->toPlainText();

    Administrator admin;
    admin.ajouterBI(adresse, montant, nbrePiece, type, statut, details);

   hide();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}

void WinAdminAjoutBI::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
