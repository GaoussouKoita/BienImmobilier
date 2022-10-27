#include "connexion.h"
#include "ui_connexion.h"
#include "winabout.h"
#include "fenetregestionnaire.h"
#include<QMessageBox>
#include<QPixmap>

Connexion::Connexion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Connexion)
{
    ui->setupUi(this);
    setWindowTitle("Connexion");
    setFixedSize(600,290);
    QPixmap img(":/img/img/accueilPrincipal.png");
        int w = ui->labelImg->width();
        int h = ui->labelImg->height();
        ui->labelImg->setPixmap(img.scaled(w, h, Qt::KeepAspectRatio));
        setWindowIcon(QIcon(":/img/img/index.jpg"));
    }

Connexion::~Connexion()
{
    delete ui;

}


void Connexion::on_pushButtonConnect_clicked()
{

               QString login = ui->lineEditLogin->text();
               QString password = ui->lineEditPassword->text();
               QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
               database.setDatabaseName("database/database.db");
               if(database.open()){

                   QSqlQuery qry;
                   QString typeCompte;
                   qry.prepare("select typecompte from  utilisateurs where login = ? and password = ?;");
                   qry.addBindValue(login);
                   qry.addBindValue(password);
                   if(qry.exec()){

                       while (qry.next()) {
                           typeCompte = qry.value(0).toString();

                       }
                   }
                   if(login.isEmpty() && password.isEmpty()){
                   QMessageBox::critical(this,"Champs vident", "Veuillez renseigner le nom d'utilisateur et le mot de passe !");
               }else if(typeCompte == "Administrateur" ){
                   close();
                   adminWind = new FenetreAdmin(this);
                   adminWind->show();

               }else if(typeCompte == "Gestionnaire" ){

                   close();
                   FenetreGestionnaire *winGest;
                   winGest =new FenetreGestionnaire(this);
                   winGest->show();

               }else {
               QMessageBox::warning(this, "Information ", " Login et/ou Password incorrecte , veuillez ressayez svp !!");
               }
}}

void Connexion::on_pushButtonCancel_clicked()
{
    bool bCloseWindow=false;
                   if(QMessageBox::Yes == QMessageBox::question(this, "Info", "Voulez-vous vraiment quitter ?")){
                       bCloseWindow = true;
                   }
               if(bCloseWindow)
               {
                  QMessageBox::information(this,"Fermeture","Au revoir et a bientot !");
                   close();
               }
}

void Connexion::on_pushButtonApropos_clicked()
{
    WinAbout *winAbout = new WinAbout();
    winAbout->show();
}
