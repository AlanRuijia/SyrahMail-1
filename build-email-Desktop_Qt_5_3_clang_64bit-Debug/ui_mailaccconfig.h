/********************************************************************************
** Form generated from reading UI file 'mailaccconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILACCCONFIG_H
#define UI_MAILACCCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_MailAccConfig
{
public:
    QWizardPage *wizardPage1;
    QLabel *label;
    QLabel *label_2;
    QWizardPage *wizardPage2;
    QLabel *label_4;
    QRadioButton *Btn163;
    QRadioButton *Btn126;
    QRadioButton *BtnQQ;
    QRadioButton *BtnGoogle;
    QRadioButton *BtnYahoo;
    QRadioButton *BtnElse;
    QWizardPage *wizardPage3;
    QLabel *test;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *MailAcc;
    QLineEdit *MailPassWd;
    QProgressBar *Check;
    QLabel *verifyacc;
    QWizardPage *wizardPage5;
    QLabel *label_7;
    QLineEdit *MailBoxName;
    QWizardPage *wizardPage4;
    QLabel *label_6;

    void setupUi(QWizard *MailAccConfig)
    {
        if (MailAccConfig->objectName().isEmpty())
            MailAccConfig->setObjectName(QStringLiteral("MailAccConfig"));
        MailAccConfig->resize(668, 411);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QStringLiteral("wizardPage1"));
        label = new QLabel(wizardPage1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-20, 30, 271, 31));
        label_2 = new QLabel(wizardPage1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 391, 16));
        MailAccConfig->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QStringLiteral("wizardPage2"));
        label_4 = new QLabel(wizardPage2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(-20, 30, 271, 31));
        Btn163 = new QRadioButton(wizardPage2);
        Btn163->setObjectName(QStringLiteral("Btn163"));
        Btn163->setGeometry(QRect(40, 90, 121, 20));
        Btn126 = new QRadioButton(wizardPage2);
        Btn126->setObjectName(QStringLiteral("Btn126"));
        Btn126->setGeometry(QRect(40, 120, 111, 20));
        BtnQQ = new QRadioButton(wizardPage2);
        BtnQQ->setObjectName(QStringLiteral("BtnQQ"));
        BtnQQ->setGeometry(QRect(40, 150, 102, 20));
        BtnGoogle = new QRadioButton(wizardPage2);
        BtnGoogle->setObjectName(QStringLiteral("BtnGoogle"));
        BtnGoogle->setGeometry(QRect(40, 180, 102, 20));
        BtnYahoo = new QRadioButton(wizardPage2);
        BtnYahoo->setObjectName(QStringLiteral("BtnYahoo"));
        BtnYahoo->setGeometry(QRect(40, 210, 102, 20));
        BtnElse = new QRadioButton(wizardPage2);
        BtnElse->setObjectName(QStringLiteral("BtnElse"));
        BtnElse->setGeometry(QRect(40, 240, 102, 20));
        MailAccConfig->addPage(wizardPage2);
        wizardPage3 = new QWizardPage();
        wizardPage3->setObjectName(QStringLiteral("wizardPage3"));
        test = new QLabel(wizardPage3);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(40, 60, 281, 16));
        label_3 = new QLabel(wizardPage3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 120, 81, 16));
        label_5 = new QLabel(wizardPage3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 170, 59, 16));
        MailAcc = new QLineEdit(wizardPage3);
        MailAcc->setObjectName(QStringLiteral("MailAcc"));
        MailAcc->setGeometry(QRect(140, 120, 211, 21));
        MailPassWd = new QLineEdit(wizardPage3);
        MailPassWd->setObjectName(QStringLiteral("MailPassWd"));
        MailPassWd->setGeometry(QRect(140, 170, 211, 21));
        MailPassWd->setMaxLength(20);
        MailPassWd->setEchoMode(QLineEdit::Password);
        Check = new QProgressBar(wizardPage3);
        Check->setObjectName(QStringLiteral("Check"));
        Check->setGeometry(QRect(30, 270, 381, 23));
        Check->setValue(24);
        verifyacc = new QLabel(wizardPage3);
        verifyacc->setObjectName(QStringLiteral("verifyacc"));
        verifyacc->setGeometry(QRect(30, 250, 201, 16));
        MailAccConfig->addPage(wizardPage3);
        wizardPage5 = new QWizardPage();
        wizardPage5->setObjectName(QStringLiteral("wizardPage5"));
        label_7 = new QLabel(wizardPage5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 40, 141, 16));
        MailBoxName = new QLineEdit(wizardPage5);
        MailBoxName->setObjectName(QStringLiteral("MailBoxName"));
        MailBoxName->setGeometry(QRect(20, 100, 241, 21));
        MailAccConfig->addPage(wizardPage5);
        wizardPage4 = new QWizardPage();
        wizardPage4->setObjectName(QStringLiteral("wizardPage4"));
        label_6 = new QLabel(wizardPage4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 60, 101, 16));
        MailAccConfig->addPage(wizardPage4);

        retranslateUi(MailAccConfig);

        QMetaObject::connectSlotsByName(MailAccConfig);
    } // setupUi

    void retranslateUi(QWizard *MailAccConfig)
    {
        MailAccConfig->setWindowTitle(QApplication::translate("MailAccConfig", "Wizard", 0));
        label->setText(QApplication::translate("MailAccConfig", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\344\270\272SyrahMail\346\267\273\345\212\240\347\224\265\345\255\220\351\202\256\344\273\266\350\264\246\346\210\267</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("MailAccConfig", "\347\216\260\345\234\250\345\260\206\345\203\217SyrahMail\346\267\273\345\212\240\344\275\240\347\232\204\347\224\265\345\255\220\351\202\256\344\273\266\350\264\246\346\210\267\357\274\214\347\202\271\346\214\211\342\200\234\347\273\247\347\273\255\342\200\235\346\235\245\345\274\200\345\247\213\343\200\202", 0));
        label_4->setText(QApplication::translate("MailAccConfig", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\351\200\211\346\213\251\350\246\201\346\267\273\345\212\240\347\232\204\351\202\256\344\273\266\350\264\246\346\210\267...</span></p></body></html>", 0));
        Btn163->setText(QApplication::translate("MailAccConfig", "163\347\275\221\346\230\223\345\205\215\350\264\271\351\202\256", 0));
        Btn126->setText(QApplication::translate("MailAccConfig", "126\347\275\221\346\230\223\345\205\215\350\264\271\351\202\256", 0));
        BtnQQ->setText(QApplication::translate("MailAccConfig", "QQ\351\202\256\347\256\261", 0));
        BtnGoogle->setText(QApplication::translate("MailAccConfig", "Google", 0));
        BtnYahoo->setText(QApplication::translate("MailAccConfig", "YAHOO\357\274\201", 0));
        BtnElse->setText(QApplication::translate("MailAccConfig", "\346\267\273\345\212\240\345\205\266\344\273\226\350\264\246\346\210\267", 0));
        test->setText(QApplication::translate("MailAccConfig", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\350\276\223\345\205\245\344\275\240\347\232\204\347\224\265\345\255\220\351\202\256\344\273\266\350\264\246\346\210\267\345\222\214\345\257\206\347\240\201</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("MailAccConfig", "\347\224\265\345\255\220\351\202\256\344\273\266\350\264\246\346\210\267", 0));
        label_5->setText(QApplication::translate("MailAccConfig", "\345\257\206\347\240\201", 0));
        verifyacc->setText(QApplication::translate("MailAccConfig", "\346\255\243\345\234\250\351\252\214\350\257\201\347\224\250\346\210\267\345\220\215\345\222\214\345\257\206\347\240\201\357\274\214\350\257\267\347\250\215\345\200\231...", 0));
        label_7->setText(QApplication::translate("MailAccConfig", "<html><head/><body><p><span style=\" font-weight:600;\">\350\207\252\345\256\232\344\271\211\347\224\265\345\255\220\351\202\256\347\256\261\345\220\215\347\247\260</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("MailAccConfig", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\256\214\346\210\220\350\256\276\347\275\256</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MailAccConfig: public Ui_MailAccConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILACCCONFIG_H
