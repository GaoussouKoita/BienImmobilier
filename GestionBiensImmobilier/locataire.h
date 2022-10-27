#ifndef LOCATAIRE_H
#define LOCATAIRE_H

#include <QObject>

class Locataire
{

    //La classe sans interface Locataire
private:
    unsigned int idLocataire;
QString nom;
QString prenom;
unsigned int numeroDePiece;
QString contact;
QString adresse;
QString email;
QString dateDeNaissance;
bool statut;
public:
    Locataire();
};

#endif // LOCATAIRE_H
