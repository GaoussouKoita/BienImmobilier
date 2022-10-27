#ifndef LOCATAIRELONGTERME_H
#define LOCATAIRELONGTERME_H

#include <QMainWindow>

namespace Ui {
class LocataireLongTerme;
}

class LocataireLongTerme : public QMainWindow
{
    Q_OBJECT

public:
    explicit LocataireLongTerme(QWidget *parent = nullptr);
    ~LocataireLongTerme();

private slots:
    void on_pushButtonEnregistre_clicked();

    void on_pushButtonAnnuler_clicked();

private:
    Ui::LocataireLongTerme *ui;
};

#endif // LOCATAIRELONGTERME_H
