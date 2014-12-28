/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWrite;
    QAction *actionWhatever_2;
    QAction *actionWhatever_3;
    QAction *actionSetup;
    QAction *actionAdd_new_account;
    QAction *actionAdd_mail_account;
    QWidget *centralWidget;
    QPushButton *WriteMail;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QWebView *webView;
    QMenuBar *menuBar;
    QMenu *menuSyrahMail;
    QMenu *menuWhatever;
    QMenu *menuAccounts;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(949, 558);
        actionWrite = new QAction(MainWindow);
        actionWrite->setObjectName(QStringLiteral("actionWrite"));
        actionWrite->setCheckable(false);
        actionWhatever_2 = new QAction(MainWindow);
        actionWhatever_2->setObjectName(QStringLiteral("actionWhatever_2"));
        actionWhatever_3 = new QAction(MainWindow);
        actionWhatever_3->setObjectName(QStringLiteral("actionWhatever_3"));
        actionSetup = new QAction(MainWindow);
        actionSetup->setObjectName(QStringLiteral("actionSetup"));
        actionAdd_new_account = new QAction(MainWindow);
        actionAdd_new_account->setObjectName(QStringLiteral("actionAdd_new_account"));
        actionAdd_mail_account = new QAction(MainWindow);
        actionAdd_mail_account->setObjectName(QStringLiteral("actionAdd_mail_account"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WriteMail = new QPushButton(centralWidget);
        WriteMail->setObjectName(QStringLiteral("WriteMail"));
        WriteMail->setGeometry(QRect(10, 40, 181, 23));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 211, 451));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(horizontalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout->addWidget(treeWidget);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(220, 70, 261, 451));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(horizontalLayoutWidget_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_2->addWidget(listWidget);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(490, 70, 441, 451));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        webView = new QWebView(horizontalLayoutWidget_3);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        horizontalLayout_3->addWidget(webView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 949, 22));
        menuSyrahMail = new QMenu(menuBar);
        menuSyrahMail->setObjectName(QStringLiteral("menuSyrahMail"));
        menuWhatever = new QMenu(menuSyrahMail);
        menuWhatever->setObjectName(QStringLiteral("menuWhatever"));
        menuAccounts = new QMenu(menuBar);
        menuAccounts->setObjectName(QStringLiteral("menuAccounts"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuSyrahMail->menuAction());
        menuBar->addAction(menuAccounts->menuAction());
        menuSyrahMail->addAction(actionWrite);
        menuSyrahMail->addSeparator();
        menuSyrahMail->addAction(menuWhatever->menuAction());
        menuSyrahMail->addAction(actionSetup);
        menuSyrahMail->addSeparator();
        menuWhatever->addAction(actionWhatever_2);
        menuWhatever->addAction(actionWhatever_3);
        menuAccounts->addAction(actionAdd_mail_account);

        retranslateUi(MainWindow);
        QObject::connect(actionWrite, SIGNAL(triggered()), WriteMail, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SyrahMail", 0));
        actionWrite->setText(QApplication::translate("MainWindow", "Write", 0));
        actionWhatever_2->setText(QApplication::translate("MainWindow", "whatever", 0));
        actionWhatever_3->setText(QApplication::translate("MainWindow", "whatever", 0));
        actionSetup->setText(QApplication::translate("MainWindow", "Add account", 0));
        actionAdd_new_account->setText(QApplication::translate("MainWindow", "Add new account", 0));
        actionAdd_mail_account->setText(QApplication::translate("MainWindow", "Add mail account", 0));
        WriteMail->setText(QApplication::translate("MainWindow", "\345\206\231\351\202\256\344\273\266", 0));
        menuSyrahMail->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuWhatever->setTitle(QApplication::translate("MainWindow", "Open", 0));
        menuAccounts->setTitle(QApplication::translate("MainWindow", "Accounts", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
