/********************************************************************************
** Form generated from reading UI file 'usersetup.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSETUP_H
#define UI_USERSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_UserSetup
{
public:
    QWizardPage *wizardPage1;
    QLabel *label;
    QWizardPage *wizardPage2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *PassEdit;
    QLabel *label_5;
    QLineEdit *PassEditChk;
    QWizardPage *wizardPage3;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWizard *UserSetup)
    {
        if (UserSetup->objectName().isEmpty())
            UserSetup->setObjectName(QStringLiteral("UserSetup"));
        UserSetup->resize(632, 438);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 201, 31));
        UserSetup->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        label_2 = new QLabel(wizardPage2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 111, 16));
        label_3 = new QLabel(wizardPage2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 59, 16));
        label_4 = new QLabel(wizardPage2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 59, 16));
        lineEdit = new QLineEdit(wizardPage2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 80, 241, 21));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setClearButtonEnabled(true);
        PassEdit = new QLineEdit(wizardPage2);
        PassEdit->setObjectName(QStringLiteral("PassEdit"));
        PassEdit->setGeometry(QRect(80, 120, 241, 21));
        PassEdit->setClearButtonEnabled(true);
        label_5 = new QLabel(wizardPage2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 160, 59, 16));
        PassEditChk = new QLineEdit(wizardPage2);
        PassEditChk->setObjectName(QStringLiteral("PassEditChk"));
        PassEditChk->setGeometry(QRect(80, 160, 241, 21));
        PassEditChk->setClearButtonEnabled(true);
        UserSetup->addPage(wizardPage2);
        wizardPage3 = new QWizardPage();
        wizardPage3->setObjectName(QStringLiteral("wizardPage3"));
        label_6 = new QLabel(wizardPage3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 131, 21));
        label_7 = new QLabel(wizardPage3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 80, 391, 21));
        UserSetup->addPage(wizardPage3);

        retranslateUi(UserSetup);

        QMetaObject::connectSlotsByName(UserSetup);
    } // setupUi

    void retranslateUi(QWizard *UserSetup)
    {
        UserSetup->setWindowTitle(QApplication::translate("UserSetup", "Wizard", 0));
        label->setText(QApplication::translate("UserSetup", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\210\233\345\273\272\344\270\200\344\270\252\347\224\250\346\210\267\346\235\245\344\275\277\347\224\250SyrahMail</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("UserSetup", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\345\222\214\345\257\206\347\240\201</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("UserSetup", "\347\224\250\346\210\267\345\220\215", 0));
        label_4->setText(QApplication::translate("UserSetup", "\345\257\206\347\240\201", 0));
        label_5->setText(QApplication::translate("UserSetup", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        label_6->setText(QApplication::translate("UserSetup", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\274\200\345\247\213\344\275\277\347\224\250SyrahMail</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("UserSetup", "\346\202\250\345\267\262\347\273\217\345\210\233\345\273\272\344\272\206\347\224\250\346\210\267\357\274\214\350\257\267\344\275\277\347\224\250\350\277\231\344\270\252\347\224\250\346\210\267\347\231\273\345\275\225\345\210\260SyrahMail\344\273\245\345\274\200\345\247\213\344\275\277\347\224\250\343\200\202", 0));
    } // retranslateUi

};

namespace Ui {
    class UserSetup: public Ui_UserSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSETUP_H
