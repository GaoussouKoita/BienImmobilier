#ifndef WINADMINEDITBI_H
#define WINADMINEDITBI_H

#include <QMainWindow>

namespace Ui {
class WinAdminEditBI;
}
//La fenetre Modifier un Bien Immobilier
//Elle se lance sur clic
//depuis la fenetre Administrator
class WinAdminEditBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminEditBI(QWidget *parent = nullptr);
    ~WinAdminEditBI();

private slots:
    void on_pushButtonModifier_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::WinAdminEditBI *ui;
};

#endif // WINADMINEDITBI_H
