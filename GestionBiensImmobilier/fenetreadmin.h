#ifndef FENETREADMIN_H
#define FENETREADMIN_H
#include <QMainWindow>
#include "winadminadduser.h"
#include "winadmindelete.h"
#include "winadminajoutbi.h"
#include "winadminshowuser.h"
#include "winadminupdate.h"
#include "winadminreadbi.h"
#include "winadmineditbi.h"
#include "winadmindesactivebi.h"
namespace Ui {
class FenetreAdmin;
}


//La fentre administrateur avec toutes les fonctionnalites
//que peut realiser un admin
class FenetreAdmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetreAdmin(QWidget *parent = nullptr);
    ~FenetreAdmin();

private slots:
    void on_pushButtonAddUser_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonAddBI_clicked();

    void on_pushButtonUpdate_clicked();

    void on_pushButtonAhow_clicked();

    void on_pushButtonRead_clicked();

    void on_pushButtonModifier_clicked();

    void on_pushButtonDesactiver_clicked();

private:
    Ui::FenetreAdmin *ui;
    WinAdminAddUser *adduser;
    WinAdminDelete *deleteUser;
    WinAdminAjoutBI *addBI;
    WinAdminUpdate *maj;
    WinAdminShowUser *showUser;
    WinAdminReadBI *lireBI;
    WinAdminEditBI *editBI;
    WinAdminDesactiveBI *desactiveBI;


};

#endif // FENETREADMIN_H
