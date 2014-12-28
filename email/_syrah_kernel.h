#ifndef _SYRAH_KERNEL_H
#define _SYRAH_KERNEL_H

//Qt Library
#include <QString>
#include <QDebug>
#include <QSettings>
#include <QDateTime>
//C++ Standard Library
#include <map>

using namespace std;

//QSettings _syrah_setting("Syrah Mail", "No Sleepless");
//enum protocol { pop3, smtp, imap };
//enum mailStatus { mailunread, mailread };

class _syrah_kernel {
private:
    //QSettings _syrah_setting();
    unsigned int currentUserId;
    unsigned int currentMailBoxId;
    unsigned int currentFolderId;
    unsigned int currentMailId;

    QString CurrentUserName;


    QString AppName, AppGroup, AppVersion;

    bool debug;

public:
    _syrah_kernel();
    ~_syrah_kernel();

    void getVersion();

    bool getDebugStatus();
    void _debug(const QString& infoClass, const QString& infoFunction, const QVariant& infoDetails);

    unsigned int getCurrentUserID() {return currentUserId;}
    unsigned int getCurrentMailBoxID() {return currentMailBoxId;}
    unsigned int getcurrentFolderID() {return currentUserId;}
    unsigned int getMailID() {return currentMailId;}
    QString getUserName() {return CurrentUserName;}

    void setCurrentUserID(int ID) {currentUserId = ID;}
    void setCurrentMailBoxID(int ID) {currentMailBoxId = ID;}
    void setCurrentFolderID(int ID) {currentFolderId = ID;}
    void setCurrentMailID(int ID) {currentMailId = ID;}
    void setCurrentUserName(QString Name) {CurrentUserName = Name;}
};


#endif // _SYRAH_KERNEL_H
