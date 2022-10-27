#include "winadmindesactivebi.h"
#include "ui_winadmindesactivebi.h"
#include "fenetreadmin.h"
#include "administrator.h"
WinAdminDesactiveBI::WinAdminDesactiveBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminDesactiveBI)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Désactivation de Bien Immobilier ");
    setFixedSize(650, 380);
}

WinAdminDesactiveBI::~WinAdminDesactiveBI()
{
    delete ui;
}

void WinAdminDesactiveBI::on_pushButtonDesactiver_clicked()
{
    QString idBI = ui->lineEditAdresse->text();

    Administrator admin;
    admin.desactiverBI(idBI);

    hide();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}

void WinAdminDesactiveBI::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
