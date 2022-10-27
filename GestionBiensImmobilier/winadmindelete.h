#ifndef WINADMINDELETE_H
#define WINADMINDELETE_H

#include <QMainWindow>

namespace Ui {
class WinAdminDelete;
}

//La fenetre Supprimer compte
//Elle se lance sur clic
//depuis la fenetre Administrator
class WinAdminDelete : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminDelete(QWidget *parent = nullptr);
    ~WinAdminDelete();

private slots:
    void on_pushButtonSupprimer_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::WinAdminDelete *ui;
};

#endif // WINADMINDELETE_H
