#include "connexion.h"
#include"fenetreadmin.h"
#include "fenetregestionnaire.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connexion w;
    w.show();
    return a.exec();
}
