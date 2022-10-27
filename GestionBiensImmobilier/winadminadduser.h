#ifndef WINADMINADDUSER_H
#define WINADMINADDUSER_H

#include <QMainWindow>
namespace Ui {
class WinAdminAddUser;

}


//Fenetre Ajouter compte
//Elle se lance suite au clic sur le boutton depuis la
//fenetre Administaror
class WinAdminAddUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminAddUser(QWidget *parent = nullptr);
    ~WinAdminAddUser();

private slots:
    void on_pushButtonSave_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::WinAdminAddUser *ui;

};

#endif // WINADMINADDUSER_H
