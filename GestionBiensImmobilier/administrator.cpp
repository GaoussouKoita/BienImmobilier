#include "administrator.h"
#include "connexion.h"
#include <QMessageBox>
#include <QDebug>
#include <QTableView>
Administrator::Administrator() :Utilisateur()
{

}


void Administrator::creerCompte(QString typeCompte, QString nom, QString prenom, QString adresse, QString contact,
                                QString dateNaissance, QString email, QString login, QString password, QString confirmation){
 if(database.open()){
     if ((!nom.isEmpty() && !prenom.isEmpty()) &&( !adresse.isEmpty() && !contact.isEmpty())){
         if (password == confirmation) {
         QSqlQuery qry;
         qry.prepare("INSERT INTO utilisateurs ("
                     "NOM,"
                     "PRENOM,"
                     "ADRESSE,"
                     "CONTACT,"
                     "DATENAISSANCE,"
                     "EMAIL,"
                     "LOGIN,"
                     "PASSWORD,"
                     "CONFIRMATION,"
                     "TYPECOMPTE)"
                     "VALUES (?,?,?,?,?,?,?,?,?,?);");
         qry.addBindValue(nom);
         qry.addBindValue(prenom);
         qry.addBindValue(adresse);
         qry.addBindValue(contact);
         qry.addBindValue(dateNaissance);
         qry.addBindValue(email);
         qry.addBindValue(login);
         qry.addBindValue(password);
         qry.addBindValue(confirmation);
         qry.addBindValue(typeCompte);
            if(qry.exec()){
         QMessageBox::information(nullptr, "Info", "Un utilsateur ajoute avec success");
         }else {
              QMessageBox::warning(nullptr, "Info", "La Base de donnee est ferme");
  }

     }
     } else {
         QMessageBox::warning(nullptr, "Info", "Veuillez renseigner tous les champs!");
     }

 }
}

void Administrator::supprimerCompte(QString idCompte){
    if(database.open()){
        if (!idCompte.isEmpty()) {
            QSqlQuery qry;

        if(QMessageBox::Yes == QMessageBox::question(nullptr, "Info", "Etes-vous sur?")){

             qry.prepare("delete from utilisateurs where id ='"+idCompte+"' ;");
             qry.exec();
     }else {
            QMessageBox::warning(nullptr, "Info", "Suprression non effectuee");}

        } else {
            QMessageBox::warning(nullptr, "Info", "Le Id du compte est vide");
        }
}
}

void Administrator::majCompte(QString idCompte, QString login, QString password, QString confirmation){

    if(database.open()){
        QSqlQuery qry;


        if ((!idCompte.isEmpty() && !login.isEmpty()) && !password.isEmpty()) {

            if(password==confirmation){
            qry.prepare("update utilisateurs set login = ?, "
                        "password = ?, confirmation = ? where id = ?;");
            qry.addBindValue(login);
            qry.addBindValue(password);
            qry.addBindValue(confirmation);
            qry.addBindValue(idCompte);

        if(qry.exec()){
            QMessageBox::information(nullptr, "Info", "Une mise a jour effectue");
            }else {
             QMessageBox::warning(nullptr, "Info", "Update non effectuee");
            }

            }else{
                QMessageBox::warning(nullptr, "Info", "Le password est different de sa confirmation");
            } }else {
            QMessageBox::warning(nullptr, "Info", "Remplissez tous les champs");
        }



}else{
         QMessageBox::information(nullptr, "DataBase", "La Base de donnee est ferme");
    }
}

void Administrator::ajouterBI(QString adresse, QString montant, QString NbrePiece,
               QString type, QString statut, QString details){

    if(!database.open()){
           QMessageBox::information(nullptr, "DataBase", "La Base de donnee est ferme");
       }
       else
       {
        if ((!adresse.isEmpty() && !montant.isEmpty()) && (!NbrePiece.isEmpty() && !details.isEmpty())) {
            QSqlQuery qry;
            qry.prepare("INSERT INTO biens ("
                        "ADRESSE,"
                        "MONTANT,"
                        "NOMBREPIECE,"
                        "TYPE,"
                        "STATUS,"
                        "DETAILS)"
                        "VALUES (?,?,?,?,?,?);");
            qry.addBindValue(adresse);
            qry.addBindValue(montant);
            qry.addBindValue(NbrePiece);
            qry.addBindValue(type);
            qry.addBindValue(statut);
            qry.addBindValue(details);
               if(qry.exec()){
            QMessageBox::information(nullptr, "Info", "Un Bien ajoute avec success");
            }else {
                 QMessageBox::warning(nullptr, "Info", "La Base de donnee est ferme");
     }

        } else {
            QMessageBox::warning(nullptr, "Info", "Veuillez remplir les champs vident !");
        }
      }

}



void Administrator::modifierBI(QString idBI, QString adresse, QString montant, QString NbrePiece,
                QString type, QString statut, QString details){



    if(database.open()){
        if ( !idBI.isEmpty() && ((!adresse.isEmpty() && !montant.isEmpty()) && (!NbrePiece.isEmpty() && !details.isEmpty()))) {

            QSqlQuery qry;
            qry.prepare("update biens set ADRESSE = ?, MONTANT = ?, NOMBREPIECE= ?, "
                        "TYPE= ?, STATUS = ?, DETAILS = ? where id = ?;");


            qry.addBindValue(adresse);
            qry.addBindValue(montant);
            qry.addBindValue(NbrePiece);
            qry.addBindValue(type);
            qry.addBindValue(statut);
            qry.addBindValue(details);
            qry.addBindValue(idBI);

        if(qry.exec()){
            QMessageBox::information(nullptr, "Info", "Une mise a jour effectue");
     }else {
             QMessageBox::warning(nullptr, "Info", "Update non effectuee");
    }

        } else {
            QMessageBox::warning(nullptr, "Info", "Veuillez renseigner tous les champs please !");
        }
}else{
         QMessageBox::information(nullptr, "DataBase", "La Base de donnee est ferme");
    }

}

void Administrator::desactiverBI(QString idBI){

    if(database.open()){
        if (!idBI.isEmpty()) {
            QSqlQuery qry;

        if(QMessageBox::Yes == QMessageBox::question(nullptr, "Info", "Etes-vous sur?")){

             qry.prepare("update biens set status = 'DESACTIVE' where id = ?;");
             qry.addBindValue(idBI);
             qry.exec();
     }else {
            QMessageBox::warning(nullptr, "Info", "Desactivation non effectuee");
        }

        } else {
            QMessageBox::warning(nullptr, "Info", "Le champ Id Bien Immobilier est vide ");
        }
    }

}



Administrator::~Administrator(){}
