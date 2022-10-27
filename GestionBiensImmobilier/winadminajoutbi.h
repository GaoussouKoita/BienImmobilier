#ifndef WINADMINAJOUTBI_H
#define WINADMINAJOUTBI_H

#include <QMainWindow>
namespace Ui {
class WinAdminAjoutBI;
}


//Fenetre Ajouter un Bien Immobilier
//Elle se lance sur clic
//depuis la fenetre Administrator
class WinAdminAjoutBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminAjoutBI(QWidget *parent = nullptr);
    ~WinAdminAjoutBI();

private slots:
    void on_pushButtonAjouter_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::WinAdminAjoutBI *ui;
};

#endif // WINADMINAJOUTBI_H
