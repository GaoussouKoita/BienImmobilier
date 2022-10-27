#ifndef GESTAFFECTERBI_H
#define GESTAFFECTERBI_H

#include <QMainWindow>

namespace Ui {
class GestAffecterBI;
}


//L'interface Affecter Bien Immobilier
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire
class GestAffecterBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestAffecterBI(QWidget *parent = nullptr);
    ~GestAffecterBI();

private slots:
    void on_pushButtonAnnuler_clicked();

    void on_pushButtonAffecter_clicked();

private:
    Ui::GestAffecterBI *ui;
};

#endif // GESTAFFECTERBI_H
