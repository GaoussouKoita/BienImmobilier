#ifndef BIENIMMOBILIER_H
#define BIENIMMOBILIER_H

#include <QObject>
class BienImmobilier
{

    //Classe sans interface de bien immobilier
private:
QString idBI;
QString adresse;
QString montant;
unsigned int nbrePiece;
bool statut;
QString details;

public:
    BienImmobilier();
};

#endif // BIENIMMOBILIER_H
