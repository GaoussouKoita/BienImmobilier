#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QObject>
#include "utilisateur.h"
#include "QTableView"
class Administrator:public Utilisateur
{
public:

    /*

    La classe sans interface Administrator avec utilise comme service
    Heritant de la classe Utilisateur

    */

    //Controncteur de la classe sans paremetre
    Administrator();

    //Methode de creation de compte utilisateur

    void creerCompte(QString typeCompte, QString nom, QString prenom, QString adresse, QString contact,
                     QString dateNaissance, QString email, QString login, QString password, QString confirmation);

    //Methode de supprimer de compte suivant l'id du compte

    void supprimerCompte(QString idCompte);

    //Methode de mise a jour du compte

    void majCompte(QString idCompte, QString login, QString password, QString confirmation);


    //Methode d'ajout de Bien Immobilier

    void ajouterBI(QString adresse, QString montant, QString NbrePiece, QString type, QString statut, QString details);

    //Methode de modification de Bien Immobilier

    void modifierBI(QString idBI, QString adresse, QString montant, QString NbrePiece, QString type, QString statut, QString details);

    //Methode de desactivatiom de Bien Immobilier

    void desactiverBI(QString idBI);

    //Methode de destruction, invoquer en fin de vie des objets
    ~Administrator();
};

#endif // ADMINISTRATOR_H
