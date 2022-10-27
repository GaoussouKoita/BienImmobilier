#ifndef GESTENREGISTRERPAYE_H
#define GESTENREGISTRERPAYE_H

#include <QMainWindow>

namespace Ui {
class GestEnregistrerPaye;
}

//L'interface Enregistre un Payement
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire
class GestEnregistrerPaye : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestEnregistrerPaye(QWidget *parent = nullptr);
    ~GestEnregistrerPaye();

private slots:
    void on_pushButtonAnnuler_clicked();

    void on_pushButtonEnregistre_clicked();

private:
    Ui::GestEnregistrerPaye *ui;
};

#endif // GESTENREGISTRERPAYE_H
