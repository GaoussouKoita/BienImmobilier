#include "winadmineditbi.h"
#include "ui_winadmineditbi.h"
#include "fenetreadmin.h"
#include "administrator.h"
WinAdminEditBI::WinAdminEditBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminEditBI)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Modification de Bien Immobilier");
    setFixedSize(732, 688);
}

WinAdminEditBI::~WinAdminEditBI()
{
    delete ui;
}

void WinAdminEditBI::on_pushButtonModifier_clicked()
{
    QString IdBI = ui->lineEditIdBI->text();
    QString adresse = ui->lineEditAdresse->text();
    QString montant = ui->lineEditMontant->text();
    QString type = ui->lineEditType->currentText();
    QString statut = ui->comboBox->currentText();
    QString nbrePiece = ui->spinBoxNbrdePieces->text();
    QString details =ui->plainTextEditDetails->toPlainText();

    Administrator admin;
    admin.modifierBI(IdBI, adresse, montant, nbrePiece, type, statut, details);
    hide();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}

void WinAdminEditBI::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
