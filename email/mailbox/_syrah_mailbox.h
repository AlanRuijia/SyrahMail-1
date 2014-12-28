#ifndef _SYRAH_MAILBOX_H
#define _SYRAH_MAILBOX_H

//Qt Library
#include <QString>
//C++ Standard Library
#include <map>
//Syrah Library
#include "_syrah_kernel.h"
#include "mailbox/_syrah_folder.h"
#include "mailbox/_syrah_contacts.h"

using namespace std;

class _syrah_mailbox
{
private:
    unsigned long int Id;
    QString mailboxName;
    QString pop3Server; unsigned int pop3Port;
    QString imapServer; unsigned int imapPort;
    QString smtpServer; unsigned int smtpPort;
    QString boxUser;
    QString boxAccess;
    bool ssl;


    //protocol sendDefault;
    //protocol recieveDefault;

    map<unsigned long int, _syrah_folder*> userFolder;
    map<unsigned long int, _syrah_contacts*> userContacts;

    QString userSign;

public:
    _syrah_mailbox(unsigned long int iD, const QString& boxName);

    const unsigned long int& getId();
    QString getName();
    const QString& getpop3_s();
    const unsigned int& getpop3_p();
    const QString& getimap_s();
    const unsigned int& getimap_p();
    const QString& getsmtp_s();
    const unsigned int& getsmtp_p();

    const QString& getUser();
    const QString& getPass();

    //const protocol& getSent();
    //const protocol& getRecieve();

    map<unsigned long int, _syrah_folder*>& uFolder();
    map<unsigned long int, _syrah_contacts*>& uContacts();

    const QString& uSign();
};

#endif // _SYRAH_MAILBOX_H
