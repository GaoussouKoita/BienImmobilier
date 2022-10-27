#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H
#include "utilisateur.h"
#include <QObject>

class Administrateur
{
public:
    Administrateur();
    void CreerCompte(QString nom, QString prenom, QString adresse, QString contact,
                         QString dateNaissance, QString email, QString login, QString password, QString confirmation );
    ~Administrateur();
};

#endif // ADMINISTRATEUR_H
