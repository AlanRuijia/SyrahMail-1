#include "mainwindow.h"
#include "usersetup.h"
#include "userlogon.h"
#include <QApplication>

#include <vector>
#include <_syrah_kernel.h>
#include <_syrah_user.h>

_syrah_kernel _syrah_sys;
vector <_syrah_user*> _syrah_userTable;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* UserLogon *logon=new UserLogon;
    logon->setAttribute(Qt::WA_DeleteOnClose);
    logon->show();*/
    MainWindow w;
    //w.show();
    return a.exec();
}
