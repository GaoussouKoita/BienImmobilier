#include "gestconsulterbi.h"
#include "ui_gestconsulterbi.h"
#include "fenetregestionnaire.h"
GestConsulterBI::GestConsulterBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestConsulterBI)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Consultation de Bien par Type");
    setFixedSize(858, 509);
}

GestConsulterBI::~GestConsulterBI()
{
    delete ui;
}

bool GestConsulterBI::connOpen(){
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("database/database.db");
    if(!database.open()){
        qDebug()  << "base de donnes fermée ";
        return false;
    }
    else
    {
      qDebug()  << "Connecté.... ";
     return true;
    }
}

void GestConsulterBI::on_pushButton_2_clicked()
{
    close();
    FenetreGestionnaire *fen;
    fen = new FenetreGestionnaire(this);
    fen->show();
}

void GestConsulterBI::on_pushButtonConsulter_clicked()
{
    QString type = ui->comboBoxType->currentText();
    QSqlQueryModel * model = new QSqlQueryModel();
    connOpen();
    QSqlQuery * qry = new QSqlQuery(database);
    qry->prepare("select * from biens where type LIKE '%"+type+"%' and status ='Non Occupé'");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
}
