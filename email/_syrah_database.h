#ifndef _SYRAH_DATABASE_H
#define _SYRAH_DATABASE_H

// Qt Library
#include <QFile>
#include <QtSql>
// C++ Standard Library
#include <string>
// Syrah Library
#include "_syrah_kernel.h"
#include "_syrah_security.h"
#include "_syrah_encode.h"

extern _syrah_kernel _syrah_sys;

using namespace std;

class _syrah_database {
private:
    QSqlDatabase _syrah_db;
    QString _db_user;

    string _md5_user;
    string _md5_pass;

    string _encrypt_key;
    QString _db_path;
    QString _db_name;

    _syrah_security inspector;
    _syrah_encode coder;

    bool status_naDb;
    bool status_loadDrive;
    bool status_openDb;
public:
    _syrah_database();
    _syrah_database(const QString& username, const QString& password);
    ~_syrah_database();

    bool setNewDb();

    void resetUserName(const QString& username);
    void resetPassword(const QString& password);
    void resetEncyptKey();

    void loadDriver();
    void setDbPath();
    bool expandDb();
    bool encodeDb();
    bool checkDbExist();
    bool openDb();

    bool autoDatabase();

    bool getNADB();
    bool getOPENDB();
    QSqlDatabase getDb();

};

#endif // _SYRAH_DATABASE_H
