// Syrah Library
#include "_syrah_kernel.h"

_syrah_kernel::_syrah_kernel() {
    //Initialise Setting
    AppName = "Syrah Mail";
    AppGroup = "No Sleepless";
    AppVersion = "Alpha";
    //QCoreApplication::setOrganizationName("No Sleepless");
    //QCoreApplication::setOrganizationDomain("No_Sleepless.com");
    //QCoreApplication::setApplicationName("Syrah Mail");

    //Read Setting
    //debug = _syrah_setting.value("system/debug").toBool();
    debug = true;  //Forced open Debug
}

_syrah_kernel::~_syrah_kernel() {
    //_syrah_setting.setValue("system/debug", debug);
    //_syrah_setting.sync();
}


void _syrah_kernel::getVersion() {
    qDebug() << AppName << " ver. " << AppVersion << " (" << AppGroup << ")";
}

bool _syrah_kernel::getDebugStatus() {
    return debug;
}

void _syrah_kernel::_debug(const QString& infoClass, const QString& infoFunction, const QVariant& infoDetails) {
    if(debug) {
        QDateTime rec;
        qDebug() << rec.currentDateTime().toString() << "[" << rec.currentDateTimeUtc().toString() << "]";
        qDebug() << infoClass << " :: " << infoFunction << " with:";
        qDebug() << "    - " << infoDetails << "\n";
    }
}

