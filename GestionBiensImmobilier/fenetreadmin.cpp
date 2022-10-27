#include "fenetreadmin.h"
#include "ui_fenetreadmin.h"
FenetreAdmin::FenetreAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetreAdmin)
{
    ui->setupUi(this);
    setWindowTitle("Administration");
    setFixedSize(750, 660);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
}

FenetreAdmin::~FenetreAdmin()
{
    delete ui;
}

void FenetreAdmin::on_pushButtonAddUser_clicked()
{


    hide();
    adduser = new WinAdminAddUser();
    adduser->show();
}

void FenetreAdmin::on_pushButtonDelete_clicked()
{
    hide();
    deleteUser = new WinAdminDelete(this);
    deleteUser->show();
}

void FenetreAdmin::on_pushButtonAddBI_clicked()
{
    hide();
    addBI = new WinAdminAjoutBI(this);
    addBI->show();
}

void FenetreAdmin::on_pushButtonUpdate_clicked()
{
    hide();
    maj = new WinAdminUpdate(this);
    maj->show();
}

void FenetreAdmin::on_pushButtonAhow_clicked()
{
    hide();
    showUser = new WinAdminShowUser(this);
    showUser->show();
}

void FenetreAdmin::on_pushButtonRead_clicked()
{
    hide();
    lireBI = new WinAdminReadBI(this);
    lireBI->show();
}

void FenetreAdmin::on_pushButtonModifier_clicked()
{
    hide();
    editBI = new WinAdminEditBI(this);
    editBI->show();
}

void FenetreAdmin::on_pushButtonDesactiver_clicked()
{
    hide();
    desactiveBI = new WinAdminDesactiveBI(this);
    desactiveBI->show();
}
