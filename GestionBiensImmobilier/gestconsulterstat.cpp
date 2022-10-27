#include "gestconsulterstat.h"
#include "ui_gestconsulterstat.h"
#include "gestionnaire.h"
GestConsulterStat::GestConsulterStat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestConsulterStat)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/img/index.jpg"));
    setWindowTitle("Consultation de Statistique");
    setFixedSize(600,600);
}

GestConsulterStat::~GestConsulterStat()
{
    delete ui;
}
