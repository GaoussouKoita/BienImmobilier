#ifndef GESTMODIFIERPAYE_H
#define GESTMODIFIERPAYE_H

#include <QMainWindow>

namespace Ui {
class GestModifierPaye;
}
//L'interface Modifier payement
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire
class GestModifierPaye : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestModifierPaye(QWidget *parent = nullptr);
    ~GestModifierPaye();

private slots:
    void on_pushButtonAnnuler_clicked();

    void on_pushButtonModifier_clicked();

private:
    Ui::GestModifierPaye *ui;
};

#endif // GESTMODIFIERPAYE_H
