#ifndef _SYRAH_MAIL_H
#define _SYRAH_MAIL_H

//Qt Library
#include <QString>
#include <QTextBlock>
#include <QTextDocument>
#include <QDateTime>
//C++ Standard Library
#include <map>
//Syrah Library
#include "E:\Project\QT Projects Temp\email\_syrah_kernel.h"

using namespace std;



class _syrah_mail
{
public:
//private:
    unsigned long int Id;
    QString uidl;
    QString subject;
    QString from;
    QStringList to;
    QString cc, bcc;
    QTextBlock messageId;
    QTextBlock inReplyTo;
    QString contentType;
    QString precedence;
    QTextBlock references;
    QString replyTo;
    QString sender;
    QString archivedAt;         //More details on WikiPedia["Email"]

    QByteArray content;
    QString attatchment;

    //mailStatus status;
    QString inStackDateTime;
    QString mailTime;         //Send Time or Receive Time
public:

    _syrah_mail(unsigned long int iD, const QString& msubject);
    _syrah_mail();

    void _set_subject(const QString& var_subject);
    void _set_sender(const QString& var_sender);
    void _set_content(const QByteArray& var_content);
    void _set_to(const QString& var_to);
};

#endif // _SYRAH_MAIL_H
