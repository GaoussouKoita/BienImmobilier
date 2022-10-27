#ifndef FENETREGESTIONNAIRE_H
#define FENETREGESTIONNAIRE_H
#include <QMainWindow>
#include "gestaffecterbi.h"
#include "gestconsulterbi.h"
#include "gestconsulterlocataire.h"
#include "gestconsulterstat.h"
#include "gestenregistrerpaye.h"
#include "gestlibererbi.h"
#include "gestmodifierpaye.h"
#include "gestsupprimerpaye.h"

namespace Ui {
class FenetreGestionnaire;
}

//La fenetre gestionnaire avec toutes les actions que
//peut effectuer un gestionnaire comme fomctionnallite

class FenetreGestionnaire : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetreGestionnaire(QWidget *parent = nullptr);
    ~FenetreGestionnaire();

private slots:
    void on_pushButtonConsulter_clicked();

    void on_pushButtonEnregistrer_clicked();

    void on_pushButtonAffecter_clicked();

    void on_pushButtonModifier_clicked();

    void on_pushButtonSupprimer_clicked();

    void on_pushButtonPaye_clicked();

    void on_pushButtonArriere_clicked();

    void on_pushButtonConsulterLocataire_clicked();

    void on_pushButtonLibererBI_clicked();

private:
    Ui::FenetreGestionnaire *ui;
    GestAffecterBI gestAffecterBI;
    GestConsulterBI gestConsulterBI;
    GestConsulterLocataire gestConsultLocataire;
    GestConsulterStat gestConsulterStat;
    GestEnregistrerPaye gestEnregistrePaye;
    GestLibererBI gestLibereBI;
    GestModifierPaye gestModifierPaye;
    GestSupprimerPaye gestSupprimerPaye;
};

#endif // FENETREGESTIONNAIRE_H
