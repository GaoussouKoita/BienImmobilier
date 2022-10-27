#ifndef GESTCONSULTERLOCATAIRE_H
#define GESTCONSULTERLOCATAIRE_H

#include <QMainWindow>
#include <QtSql>
namespace Ui {
class GestConsulterLocataire;
}

//L'interface Consulter Locataire
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire
class GestConsulterLocataire : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestConsulterLocataire(QWidget *parent = nullptr);
    ~GestConsulterLocataire();

private slots:
    void on_pushButtonAnnuler_clicked();

    void on_pushButtonConsulter_clicked();

private:
    Ui::GestConsulterLocataire *ui;
    QSqlDatabase database;
    bool connOpen();
};

#endif // GESTCONSULTERLOCATAIRE_H
