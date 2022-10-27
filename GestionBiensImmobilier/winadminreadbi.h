#ifndef WINADMINREADBI_H
#define WINADMINREADBI_H
#include "QtSql"
#include <QMainWindow>

namespace Ui {
class WinAdminReadBI;
}
//La fenetre Lire un Bien Immobilier
//Elle se lance sur clic
//depuis la fenetre Administrator et permet d'afficher une liste
//de Bien Immobilier

class WinAdminReadBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminReadBI(QWidget *parent = nullptr);
    ~WinAdminReadBI();

private slots:
    void on_pushButtonLire_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::WinAdminReadBI *ui;
    QSqlDatabase database;
        void connClose();
        bool connOpen();
};

#endif // WINADMINREADBI_H
