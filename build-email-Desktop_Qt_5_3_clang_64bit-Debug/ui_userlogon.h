/********************************************************************************
** Form generated from reading UI file 'userlogon.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGON_H
#define UI_USERLOGON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogon
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *UserNameEdit;
    QLineEdit *PassWdEdit;
    QPushButton *BtnLogon;
    QPushButton *BtnCancel;
    QPushButton *BtnNewUsr;
    QMenuBar *menuBar;
    QMenu *menuLog_on;

    void setupUi(QMainWindow *UserLogon)
    {
        if (UserLogon->objectName().isEmpty())
            UserLogon->setObjectName(QStringLiteral("UserLogon"));
        UserLogon->resize(400, 300);
        centralWidget = new QWidget(UserLogon);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 241, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 59, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 140, 59, 16));
        UserNameEdit = new QLineEdit(centralWidget);
        UserNameEdit->setObjectName(QStringLiteral("UserNameEdit"));
        UserNameEdit->setGeometry(QRect(120, 90, 151, 21));
        UserNameEdit->setMouseTracking(true);
        UserNameEdit->setFocusPolicy(Qt::ClickFocus);
        UserNameEdit->setClearButtonEnabled(true);
        PassWdEdit = new QLineEdit(centralWidget);
        PassWdEdit->setObjectName(QStringLiteral("PassWdEdit"));
        PassWdEdit->setGeometry(QRect(120, 140, 151, 21));
        BtnLogon = new QPushButton(centralWidget);
        BtnLogon->setObjectName(QStringLiteral("BtnLogon"));
        BtnLogon->setGeometry(QRect(20, 210, 115, 32));
        BtnLogon->setAutoDefault(false);
        BtnLogon->setDefault(true);
        BtnCancel = new QPushButton(centralWidget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(140, 210, 115, 32));
        BtnNewUsr = new QPushButton(centralWidget);
        BtnNewUsr->setObjectName(QStringLiteral("BtnNewUsr"));
        BtnNewUsr->setGeometry(QRect(260, 210, 115, 32));
        UserLogon->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UserLogon);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuLog_on = new QMenu(menuBar);
        menuLog_on->setObjectName(QStringLiteral("menuLog_on"));
        UserLogon->setMenuBar(menuBar);

        menuBar->addAction(menuLog_on->menuAction());

        retranslateUi(UserLogon);
        QObject::connect(UserNameEdit, SIGNAL(textChanged(QString)), PassWdEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(UserLogon);
    } // setupUi

    void retranslateUi(QMainWindow *UserLogon)
    {
        UserLogon->setWindowTitle(QApplication::translate("UserLogon", "UserLogon", 0));
        label->setText(QApplication::translate("UserLogon", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">\347\231\273\345\275\225\345\210\260SyrahMail</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("UserLogon", "\347\224\250\346\210\267\345\220\215", 0));
        label_3->setText(QApplication::translate("UserLogon", "\345\257\206\347\240\201", 0));
        BtnLogon->setText(QApplication::translate("UserLogon", "\347\231\273\345\275\225", 0));
        BtnCancel->setText(QApplication::translate("UserLogon", "\345\217\226\346\266\210", 0));
        BtnNewUsr->setText(QApplication::translate("UserLogon", "\345\210\233\345\273\272\346\226\260\347\224\250\346\210\267", 0));
        menuLog_on->setTitle(QApplication::translate("UserLogon", "Log on ", 0));
    } // retranslateUi

};

namespace Ui {
    class UserLogon: public Ui_UserLogon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGON_H
