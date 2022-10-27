#include "gestionnaire.h"
#include <QMessageBox>
#include <QDebug>

Gestionnaire::Gestionnaire():Utilisateur()
{

}

void Gestionnaire::affecterBI(QString nom, QString prenom, QString numeroPiece,
                QString contact, QString email, QString sexe, QString dateNaissance,
                QString typeLocation , QString idBI ){
    if(database.open()){
        if (((!nom.isEmpty() && !prenom.isEmpty()) && (!numeroPiece.isEmpty() && !contact.isEmpty()))
                && !idBI.isEmpty() ) {

            QSqlQuery qry;
        qry.prepare("INSERT INTO locataires ("
                    "NOM,"
                    "PRENOM,"
                    "NUMEROPIECE,"
                    "CONTACT,"
                    "EMAIL,"
                    "SEXE,"
                    "DATENAISSANCE,"
                    "TYPELOCATION,"
                    "BIENS_ID)"
                    "VALUES (?,?,?,?,?,?,?,?,?);");

        qry.addBindValue(nom);
        qry.addBindValue(prenom);
        qry.addBindValue(numeroPiece);
        qry.addBindValue(contact);
        qry.addBindValue(email);
        qry.addBindValue(sexe);
        qry.addBindValue(dateNaissance);
        qry.addBindValue(typeLocation);
        qry.addBindValue(idBI);



        if(qry.exec()){
            QMessageBox::information(nullptr, "Info", "Une Affectation effectue");
            QSqlQuery qry1;
            qry1.prepare("update biens set status = 'Occupé' where ID ='"+idBI+"'");
            qry1.exec();


     }else {
             QMessageBox::warning(nullptr, "Info", "Affectation non effectuee");
    }

        } else {
            QMessageBox::warning(nullptr, "Info", "Veuillez renseignez les champs vident !");
        }

   }else {
        QMessageBox::information(nullptr, "Info", "Base de donnee fermee");
}

}

void Gestionnaire::enregistrePayement(QString date, QString montant,
                        QString  nom,  QString prenom, QString idBI){

    if(database.open()){
        if ((!montant.isEmpty() && !prenom.isEmpty()) && (!nom.isEmpty() && !idBI.isEmpty())) {
            QSqlQuery qry;
            qry.prepare("INSERT INTO payements ("
                        "DATE,"
                        "MONTANT,"
                        "NOM_LOCATAIRE,"
                        "PRENOM_LOCATAIRE,"
                        "ID_BIEN)"
                        "VALUES (?,?,?,?,?);");
            qry.addBindValue(date);
            qry.addBindValue(montant);
            qry.addBindValue(nom);
            qry.addBindValue(prenom);
            qry.addBindValue(idBI);
            if(qry.exec()){
                QMessageBox::information(nullptr, "Info", "Un payement effectue");
         }else {
                 QMessageBox::warning(nullptr, "Info", "Payement non effectuee");
        }

        } else {
            QMessageBox::warning(nullptr, "Info", "Veuillez renseigner les champs vident please !");
        }

   }else {
        QMessageBox::information(nullptr, "Info", "Base de donnee fermee");
}
   }

void Gestionnaire::modifierPayement(QString idPayement, QString date,
                      QString montant){

    if(database.open()){
        if (!idPayement.isEmpty() && !montant.isEmpty()) {
            QSqlQuery qry;
            qry.prepare("update payements set DATE = ?, MONTANT = ? where ID = ?");
            qry.addBindValue(date);
            qry.addBindValue(montant);
            qry.addBindValue(idPayement);
            if(qry.exec()){
                QMessageBox::information(nullptr, "Info", "Une modifcation de  payement effectuee");
         }else {
                 QMessageBox::warning(nullptr, "Info", "Modification non effectuee");
        }
        } else {
            QMessageBox::warning(nullptr, "Info", "Veuillez renseigner tous les champs please !");
        }


   }else {
        QMessageBox::information(nullptr, "Info", "Base de donnee fermee");
}
}
void Gestionnaire::supprimerPayement(QString idPayement){
    if(database.open()){
        if (!idPayement.isEmpty()) {
            QSqlQuery qry;
            if(QMessageBox::Yes == QMessageBox::question(nullptr, "Info", "Etes-vous sur?")){
                qry.prepare("delete from payements where ID = ?");
                qry.addBindValue(idPayement);
                qry.exec();

        }
        }else {
            QMessageBox::warning(nullptr, "Info", "Le champ Id Payement est vide !");
        }
   }else {
          QMessageBox::warning(nullptr, "Info", "Suprression non effectuee");}
  }

void Gestionnaire::libererBI(QString idBI){

    if(database.open()){

        if (!idBI.isEmpty()) {
            QSqlQuery qry;
            qry.prepare("update biens set status = 'Non Occupé' where ID = ?");
            qry.addBindValue(idBI);
            if(qry.exec()){
                QMessageBox::information(nullptr, "Info", "Liberation d'un bien effectuee");
         }else {
                 QMessageBox::warning(nullptr, "Info", "Liberation du bien non effectuee");
        }
        } else {
            QMessageBox::warning(nullptr, "Info", "Le champ Id Bien Immobilier est vide !");
        }

   }else {
        QMessageBox::information(nullptr, "Info", "Base de donnee fermee");
}

}

