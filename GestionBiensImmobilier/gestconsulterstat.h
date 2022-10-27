#ifndef GESTCONSULTERSTAT_H
#define GESTCONSULTERSTAT_H

#include <QMainWindow>

namespace Ui {
class GestConsulterStat;
}
//L'interface Consulter Statistiques
//Elle est lancee par un clic sur le boutton
//depuis la fenetre du gestionnaire
class GestConsulterStat : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestConsulterStat(QWidget *parent = nullptr);
    ~GestConsulterStat();

private:
    Ui::GestConsulterStat *ui;
};

#endif // GESTCONSULTERSTAT_H
