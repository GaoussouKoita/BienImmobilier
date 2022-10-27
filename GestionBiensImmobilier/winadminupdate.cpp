#include "winadminupdate.h"
#include "ui_winadminupdate.h"
#include "fenetreadmin.h"
#include "administrator.h"
WinAdminUpdate::WinAdminUpdate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminUpdate)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Mise à Jour de Compte ");
    setFixedSize(660, 580);
}

WinAdminUpdate::~WinAdminUpdate()
{
    delete ui;
}

void WinAdminUpdate::on_pushButtonUploader_clicked()
{
    QString idCompte = ui->lineEditIdCompte->text();
    QString login = ui->lineEditLogin->text();
    QString password = ui->lineEditPassword->text();
    QString confirmation = ui->lineEditConfirmation->text();

    Administrator admin;
    admin.majCompte(idCompte, login, password, confirmation);

    hide();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}

void WinAdminUpdate::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
