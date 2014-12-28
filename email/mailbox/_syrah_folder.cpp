#include "_syrah_folder.h"

_syrah_folder::_syrah_folder(unsigned long int iD, const QString& fName) {
    Id = iD;
    folderName = fName;
}

map<unsigned long int, _syrah_mail*>& _syrah_folder::uMail() { return userMail; }
