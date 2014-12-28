#include "_syrah_mail.h"

_syrah_mail::_syrah_mail(unsigned long int iD, const QString& msubject) {
    Id = iD;
    subject = msubject;
}

_syrah_mail::_syrah_mail()
{

}

void _syrah_mail::_set_subject(const QString& var_subject)
{
    subject = var_subject;
}

void _syrah_mail::_set_sender(const QString& var_sender)
{
    sender = var_sender;
}

void _syrah_mail::_set_content(const QByteArray& var_content)
{
    content = var_content;
}

void _syrah_mail::_set_to(const QString& var_to)
{
    to << var_to;
}
