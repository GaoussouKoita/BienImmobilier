#include "winadminreadbi.h"
#include "ui_winadminreadbi.h"
#include "fenetreadmin.h"
#include "administrator.h"
WinAdminReadBI::WinAdminReadBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminReadBI)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Lecture de Bien Immobilier");
    setFixedSize(716, 635);
}

WinAdminReadBI::~WinAdminReadBI()
{
    delete ui;
}

void WinAdminReadBI::connClose(){
    database.close();
    database.removeDatabase(QSqlDatabase::defaultConnection);
}

bool WinAdminReadBI::connOpen(){
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("database/database.db");
    if(!database.open()){
        return false;
    }
    else
    {
     return true;
    }
}

void WinAdminReadBI::on_pushButtonLire_clicked()
{
    QString adresse = ui->lineEditAdresse->text();
    QString montant = ui->lineEditMontant->text();
    QString type = ui->lineEditType->currentText();
    QString nbrePiece = ui->spinBoxNbreDePieces->text();

    QSqlQueryModel * model = new QSqlQueryModel();
    connOpen();
    QSqlQuery * qry = new QSqlQuery(database);
    qry->prepare("select * from biens where adresse LIKE '%"+adresse+"%'");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    connClose();
}

void WinAdminReadBI::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
