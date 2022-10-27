#ifndef CONNEXION_H
#define CONNEXION_H

#include <QMainWindow>
#include"fenetreadmin.h"


//Classe d'interface de connexion
//La premiere fenetre lance l'execution du programme
QT_BEGIN_NAMESPACE
namespace Ui { class Connexion; }
QT_END_NAMESPACE

class Connexion : public QMainWindow
{
    Q_OBJECT

public:
    Connexion(QWidget *parent = nullptr);
    ~Connexion();

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonCancel_clicked();

    void on_pushButtonApropos_clicked();

private:
    Ui::Connexion *ui;
    FenetreAdmin *adminWind;
};
#endif // CONNEXION_H
