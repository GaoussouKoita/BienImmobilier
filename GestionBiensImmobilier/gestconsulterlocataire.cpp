#include "gestconsulterlocataire.h"
#include "ui_gestconsulterlocataire.h"
#include "fenetregestionnaire.h"
GestConsulterLocataire::GestConsulterLocataire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestConsulterLocataire)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Consultation de Locataire");
    setFixedSize(772, 493);
}

bool GestConsulterLocataire::connOpen(){

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
GestConsulterLocataire::~GestConsulterLocataire()
{
    delete ui;
}

void GestConsulterLocataire::on_pushButtonAnnuler_clicked()
{
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}


void GestConsulterLocataire::on_pushButtonConsulter_clicked()
{
     QString nom = ui->lineEditNomLocataire->text();
     QString prenom = ui->lineEditPrenomLocataire->text();

     QSqlQueryModel * model = new QSqlQueryModel();
     connOpen();
     QSqlQuery * qry = new QSqlQuery(database);
     qry->prepare("select * from payements where Nom_Locataire LIKE '%"+nom+"%' "
             "and Prenom_Locataire LIKE '%"+prenom+"%' ORDER BY Nom_Locataire and  Date DESC ");
     qry->exec();
     model->setQuery(*qry);
     ui->tableView->setModel(model);
}
