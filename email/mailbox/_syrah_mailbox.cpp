#include "_syrah_mailbox.h"

_syrah_mailbox::_syrah_mailbox(unsigned long int iD, const QString& boxName) {
    Id = iD;
    mailboxName = boxName;
}

QString _syrah_mailbox::getName() { return mailboxName; }

map<unsigned long int, _syrah_folder*>& _syrah_mailbox::uFolder() { return userFolder; }
map<unsigned long int, _syrah_contacts*>& _syrah_mailbox::uContacts() { return userContacts; }
