#ifndef WINADMINSHOWBI_H
#define WINADMINSHOWBI_H

#include <QMainWindow>

namespace Ui {
class WinAdminShowBI;
}

class WinAdminShowBI : public QMainWindow
{
    Q_OBJECT

public:
    explicit WinAdminShowBI(QWidget *parent = nullptr);
    ~WinAdminShowBI();

private:
    Ui::WinAdminShowBI *ui;
};

#endif // WINADMINSHOWBI_H
