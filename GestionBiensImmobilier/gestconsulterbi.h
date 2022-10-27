#ifndef GESTCONSULTERBI_H
#define GESTCONSULTERBI_H

#include <QMainWindow>
#include <QtSql>
namespace Ui {
class GestConsulterBI;
}
//L'interface Consulter Bien Immobilier
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire

class GestConsulterBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestConsulterBI(QWidget *parent = nullptr);
    ~GestConsulterBI();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButtonConsulter_clicked();

private:
    Ui::GestConsulterBI *ui;
    bool connOpen();
    QSqlDatabase database;
};

#endif // GESTCONSULTERBI_H
