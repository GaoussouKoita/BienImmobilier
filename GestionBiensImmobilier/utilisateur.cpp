#include "utilisateur.h"

Utilisateur::Utilisateur()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("database/database.db");
}

Utilisateur::~Utilisateur(){
    database.close();
}
