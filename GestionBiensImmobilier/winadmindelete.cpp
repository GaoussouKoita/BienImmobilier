#include "winadmindelete.h"
#include "ui_winadmindelete.h"
#include "fenetreadmin.h"
#include "administrator.h"
WinAdminDelete::WinAdminDelete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminDelete)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Suppression de Compte");
    setFixedSize(540, 350);
}

WinAdminDelete::~WinAdminDelete()
{
    delete ui;
}

void WinAdminDelete::on_pushButtonSupprimer_clicked()
{
    QString idCompte = ui->lineEditIdCompte->text();

    Administrator admin;
    admin.supprimerCompte(idCompte);

    hide();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}

void WinAdminDelete::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
