#ifndef WINADMINUPDATE_H
#define WINADMINUPDATE_H

#include <QMainWindow>

namespace Ui {
class WinAdminUpdate;
}

//La fenetre Mise a jour Compte
//Elle se lance sur clic
//depuis la fenetre Administrator

class WinAdminUpdate : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminUpdate(QWidget *parent = nullptr);
    ~WinAdminUpdate();

private slots:
    void on_pushButtonUploader_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::WinAdminUpdate *ui;
};

#endif // WINADMINUPDATE_H
