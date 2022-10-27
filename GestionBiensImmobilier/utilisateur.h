#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include "QtSql"
#include <QObject>


//La classe sans interface Utilisateur
//Le parent des classes Administrator et Gestionnaire
class Utilisateur
{


protected:
    QString nom;
    QString prenom;
    QString adresse;
    QString contact;
    QString dateDeNaissance;
    QString email;
    QString login;
    QString password;
    QString confirmation;
    QSqlDatabase database;
public:
    Utilisateur();
    ~Utilisateur();

};

#endif // UTILISATEUR_H
