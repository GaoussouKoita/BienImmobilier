#include "winadminshowuser.h"
#include "ui_winadminshowuser.h"
#include "fenetreadmin.h"
#include "administrator.h"
WinAdminShowUser::WinAdminShowUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminShowUser)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Lecture de Compte");
    setFixedSize(829, 557);
}

WinAdminShowUser::~WinAdminShowUser()
{
    delete ui;
}

    void WinAdminShowUser::connClose(){
        database.close();
        database.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool WinAdminShowUser::connOpen(){
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

void WinAdminShowUser::on_pushButtonAfficher_clicked()
{
    QString nom = ui->lineEditNom->text();
       QString prenom = ui->lineEditPrenom->text();
       //Administrator admin;

       QSqlQueryModel * model = new QSqlQueryModel();
       connOpen();
       QSqlQuery * qry = new QSqlQuery(database);
       qry->prepare("select * from utilisateurs where NOM LIKE '%"+nom+"%'"
                               "or PRENOM LIKE '%"+prenom+"%'");
       qry->exec();
       model->setQuery(*qry);
       ui->tableView->setModel(model);
       connClose();
   }

void WinAdminShowUser::on_pushButtonCancel_clicked()
{
    close();
    FenetreAdmin *fen;
    fen = new FenetreAdmin(this);
    fen->show();
}
