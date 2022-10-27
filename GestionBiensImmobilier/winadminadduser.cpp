#include "winadminadduser.h"
#include "ui_winadminadduser.h"
#include "fenetreadmin.h"
#include <QMessageBox>
#include "administrator.h"
#include <QDate>
WinAdminAddUser::WinAdminAddUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminAddUser)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Création de Compte");
    setFixedSize(750, 700);
}

WinAdminAddUser::~WinAdminAddUser()
{
    delete ui;
}

void WinAdminAddUser::on_pushButtonSave_clicked()
{
    QString typeCompte = ui->comboBoxTypeCompte->currentText();
    QString nom = ui->lineEditNom->text();
    QString prenom = ui->lineEditPrenom->text();
    QString email = ui->lineEditEMail->text();
    QString dateNaiss = ui->dateEditDateDeNaissance->text();
    QString login = ui->lineEditLogin->text();
    QString adresse = ui->lineEditAdresse->text();
    QString contact = ui->lineEditContact->text();
    QString password = ui->lineEditPassword->text();
    QString confirmation = ui->lineEditConfirmation->text();



    Administrator adminstrator;
    adminstrator.creerCompte(typeCompte, nom, prenom,adresse,contact,dateNaiss,email,login,password,confirmation);
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}

void WinAdminAddUser::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
