#-------------------------------------------------
#
# Project created by QtCreator 2014-12-07T10:51:10
#
#-------------------------------------------------

QT       += core gui sql network webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = email
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    usersetup.cpp \
    userlogon.cpp \
    mailwindow.cpp \
    encode/_syrah_encode_md5.cpp \
    encode/_syrah_encode_xor.cpp \
    mailbox/_syrah_contacts.cpp \
    mailbox/_syrah_folder.cpp \
    mailbox/_syrah_mail.cpp \
    mailbox/_syrah_mailbox.cpp \
    mailbox/_syrah_rules.cpp \
    _syrah_database.cpp \
    _syrah_encode.cpp \
    _syrah_kernel.cpp \
    _syrah_security.cpp \
    _syrah_user.cpp \
    mailaccconfig.cpp \
    smtplogin.cpp \
    Welcome.cpp \
    emailaddress.cpp \
    mimecontentformatter.cpp \
    mimehtml.cpp \
    mimemessage.cpp \
    mimepart.cpp \
    mimepultipart.cpp \
    mimetext.cpp \
    quotedptrintable.cpp \
    smtpclient.cpp

HEADERS  += mainwindow.h \
    usersetup.h \
    userlogon.h \
    mailwindow.h \
    _syrah_database.h \
    _syrah_encode.h \
    _syrah_kernel.h \
    _syrah_security.h \
    _syrah_user.h \
    encode/_syrah_encode_md5.h \
    encode/_syrah_encode_xor.h \
    mailbox/_syrah_contacts.h \
    mailbox/_syrah_folder.h \
    mailbox/_syrah_mail.h \
    mailbox/_syrah_mailbox.h \
    mailbox/_syrah_rules.h \
    mailaccconfig.h \
    smtplogin.h \
    Welcome.h \
    emailaddress.h \
    mimecontentformatter.h \
    mimehtml.h \
    mimemessage.h \
    mimemultipart.h \
    mimepart.h \
    mimetext.h \
    quotedprintable.h \
    smtpclient.h

FORMS    += \
    mainwindow.ui \
    usersetup.ui \
    userlogon.ui \
    mailwindow.ui \
    mailaccconfig.ui \
    Welcome.ui
