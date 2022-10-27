#include "winabout.h"
#include "ui_winabout.h"

WinAbout::WinAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WinAbout)
{
    ui->setupUi(this);
    setWindowTitle("About");
}

WinAbout::~WinAbout()
{
    delete ui;
}
