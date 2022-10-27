#ifndef GESTSUPPRIMERPAYE_H
#define GESTSUPPRIMERPAYE_H

#include <QMainWindow>

namespace Ui {
class GestSupprimerPaye;
}

//L'interface Supprimer un Payement
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire

class GestSupprimerPaye : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestSupprimerPaye(QWidget *parent = nullptr);
    ~GestSupprimerPaye();

private slots:
    void on_pushButtonAnnuler_clicked();

    void on_pushButtonMettreAJour_clicked();

private:
    Ui::GestSupprimerPaye *ui;
};

#endif // GESTSUPPRIMERPAYE_H
