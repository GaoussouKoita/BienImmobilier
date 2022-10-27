#ifndef WINADMINDESACTIVEBI_H
#define WINADMINDESACTIVEBI_H

#include <QMainWindow>

namespace Ui {
class WinAdminDesactiveBI;
}

//La fenetre Desactiver un BIen Immobilier
//Elle se lance sur clic
//depuis la fenetre Administrator

class WinAdminDesactiveBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminDesactiveBI(QWidget *parent = nullptr);
    ~WinAdminDesactiveBI();

private slots:
    void on_pushButtonDesactiver_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::WinAdminDesactiveBI *ui;
};

#endif // WINADMINDESACTIVEBI_H
