#ifndef GESTIONNAIRE_H
#define GESTIONNAIRE_H

#include <QObject>
#include "utilisateur.h"
class Gestionnaire : public Utilisateur
{
public:

    //La classe sans interface Gestionnaire
    //Elle regroupe les actions pouvant etre effectuees par un
    //Gestionnaire
    Gestionnaire();
    void affecterBI(QString nom, QString prenom, QString numeroPiece, QString contact, QString email, QString sexe, QString dateNaissance,  QString typeLocation ,QString idBI );
    void enregistrePayement(QString date, QString montant,
                            QString  nom,  QString prenom, QString idBI);
    void modifierPayement(QString idPayement, QString date, QString montant);
    void supprimerPayement(QString idPayement);
    void libererBI(QString idBI);

};

#endif // GESTIONNAIRE_H
