/********************************************************************************
** Form generated from reading UI file 'mailwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILWINDOW_H
#define UI_MAILWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MailWindow
{
public:

    void setupUi(QWidget *MailWindow)
    {
        if (MailWindow->objectName().isEmpty())
            MailWindow->setObjectName(QStringLiteral("MailWindow"));
        MailWindow->resize(400, 300);

        retranslateUi(MailWindow);

        QMetaObject::connectSlotsByName(MailWindow);
    } // setupUi

    void retranslateUi(QWidget *MailWindow)
    {
        MailWindow->setWindowTitle(QApplication::translate("MailWindow", "MailWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MailWindow: public Ui_MailWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILWINDOW_H
