#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include "_syrah_user.h"
#include "mailaccconfig.h"
#include "QtWebkitWidgets/QWebView"

extern vector <_syrah_user*> _syrah_userTable;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    UserLogon *logon=new UserLogon;

    connect(logon, SIGNAL(UserLogonStateChanged()), this, SLOT(ShowWindow()));

    vector<_syrah_user*>& uTable = _syrah_userTable;
    uTable.push_back(new _syrah_user("TestUser","TestPass"));
    uTable[0]->uMailbox().insert(pair<unsigned long int, _syrah_mailbox*>(0 ,new _syrah_mailbox(0, "Sina")));
    uTable[0]->uMailbox().insert(pair<unsigned long int, _syrah_mailbox*>(1 ,new _syrah_mailbox(1, "QQ")));
    uTable[0]->uMailbox()[0]->uFolder().insert(pair<unsigned long int, _syrah_folder*>(0, new _syrah_folder(0, "en0")));
    //uTable[0]->uMailbox()[0]->uFolder().insert(pair<unsigned long int, _syrah_folder*>(1, new _syrah_folder(1, "en1")));
    //uTable[0]->uMailbox()[1]->uFolder().insert(pair<unsigned long int, _syrah_folder*>(0, new _syrah_folder(0, "en0")));
    uTable[0]->uMailbox()[0]->uFolder()[0]->uMail().insert(pair<unsigned long int, _syrah_mail*>(0, new _syrah_mail(0,"Welcome to Syrah Mail")));
    //uTable[0]->uMailbox()[0]->uFolder()[0]->uMail().insert(pair<unsigned long int, _syrah_mail*>(1, new _syrah_mail(1,"How to use Syrah Mail")));

    ui->treeWidget->setColumnCount(2);
    ui->treeWidget->setHeaderLabel("收件箱");

    QFont ft;
    ft.setBold(1);

    QTreeWidgetItem *box1 = new QTreeWidgetItem(ui->treeWidget, QStringList(uTable[0]->uMailbox()[0]->getName()));
    box1->setFont(0,ft);

    QTreeWidgetItem *box1_f1 = new QTreeWidgetItem(box1, QStringList(QString(uTable[0]->uMailbox()[0]->uFolder()[0]->getName())));

    ui->webView->setUrl(QUrl(QStringLiteral("http://www.baidu.com")));

    ui->listWidget->addItem(QString(uTable[0]->uMailbox()[0]->uFolder()[0]->uMail()[0]->getSubject()));

    logon->show();
    setWindowTitle(tr("SyrahMail"));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_WriteMail_clicked()
{
    MailWindow *WriteWindow=new MailWindow;//(}QWidge}t *parent = 0);
    WriteWindow->setAttribute(Qt::WA_DeleteOnClose);
    WriteWindow->show();

}

void MainWindow::on_actionSetup_triggered()
{
    UserSetup *setup=new UserSetup;
    setup->setAttribute(Qt::WA_DeleteOnClose);
    setup->show();
}

void MainWindow::ShowWindow()
{
    this->show();
}

void MainWindow::on_actionAdd_Mail_account_triggered()
{
    MailAccConfig *NewMailAcc = new MailAccConfig;
    NewMailAcc->setAttribute(Qt::WA_DeleteOnClose);
    NewMailAcc->show();
}

void MainWindow::on_actionAdd_mail_account_triggered()
{
    MailAccConfig *NewMailAcc = new MailAccConfig;
    NewMailAcc->setAttribute(Qt::WA_DeleteOnClose);
    NewMailAcc->show();
}
