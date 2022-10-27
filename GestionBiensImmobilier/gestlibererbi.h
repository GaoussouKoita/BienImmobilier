#ifndef GESTLIBERERBI_H
#define GESTLIBERERBI_H

#include <QMainWindow>

namespace Ui {
class GestLibererBI;
}
//L'interface Liberer Bien Immobilier
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire
class GestLibererBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestLibererBI(QWidget *parent = nullptr);
    ~GestLibererBI();

private slots:
 void on_pushButtonLiberer_clicked();

    void on_pushButtonAnnuler_clicked();

private:
    Ui::GestLibererBI *ui;
};

#endif // GESTLIBERERBI_H
