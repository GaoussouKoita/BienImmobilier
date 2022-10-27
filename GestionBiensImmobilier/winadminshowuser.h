#ifndef WINADMINSHOWUSER_H
#define WINADMINSHOWUSER_H
#include <QtSql>
#include <QMainWindow>

namespace Ui {
class WinAdminShowUser;
}
//La fenetre Afficher Compte Utilisateur
//Elle se lance sur clic
//depuis la fenetre Administrator

class WinAdminShowUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminShowUser(QWidget *parent = nullptr);
    ~WinAdminShowUser();




private slots:

    void on_pushButtonCancel_clicked();

    void on_pushButtonAfficher_clicked();

private:
    Ui::WinAdminShowUser *ui;
    QSqlDatabase database;
        void connClose();
        bool connOpen();
};

#endif // WINADMINSHOWUSER_H
