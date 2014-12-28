#ifndef _SYRAH_FOLDER_H
#define _SYRAH_FOLDER_H

//Qt Library
#include <QString>
//C++ Standard Library
#include <map>
//Syrah Library
#include "mailbox/_syrah_mail.h"

using namespace std;

class _syrah_folder
{
private:
    unsigned long int Id;
    QString folderName;

    bool FolderSecurity;    // may support in the future
    QString AccessCode;     // using AccessCode encrypts each mail first

    map<unsigned long int, _syrah_mail*> userMail;
public:
    _syrah_folder(unsigned long int iD, const QString& fName);

    const unsigned long int& getId();
    const QString& getName() { return folderName; }

    //const bool& isSecure();    // may support in the future
    //const QString& getCode();     // using AccessCode encrypts each mail first

    map<unsigned long int, _syrah_mail*>& uMail();
};

#endif // _SYRAH_FOLDER_H
