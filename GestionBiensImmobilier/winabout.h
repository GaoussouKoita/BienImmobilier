#ifndef WINABOUT_H
#define WINABOUT_H

#include <QDialog>

namespace Ui {
class WinAbout;
}
//Fenetre About
//Lance egalement sur clic sur le boutton apropos
//Elle renseigne les contextes du programme
//Elle peut se lance depuis la fenetre connexion

class WinAbout : public QDialog
{
    Q_OBJECT

public:
    explicit WinAbout(QWidget *parent = nullptr);
    ~WinAbout();

private:
    Ui::WinAbout *ui;
};

#endif // WINABOUT_H
