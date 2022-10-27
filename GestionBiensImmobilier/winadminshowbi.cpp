#include "winadminshowbi.h"
#include "ui_winadminshowbi.h"

WinAdminShowBI::WinAdminShowBI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WinAdminShowBI)
{
    ui->setupUi(this);
}

WinAdminShowBI::~WinAdminShowBI()
{
    delete ui;
}
