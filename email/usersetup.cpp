#include "usersetup.h"
#include "userlogon.h"
#include "ui_usersetup.h"
#include <QMessageBox>
#include <QFile>
#include <vector>
#include "_syrah_user.h"

extern vector <_syrah_user*> _syrah_userTable;

UserSetup::UserSetup(QWidget *parent) :
    QWizard(parent),
    ui2(new Ui::UserSetup)
{
    ui2->setupUi(this);
    ui2->PassEdit->setEchoMode(QLineEdit::Password);
    ui2->PassEditChk->setEchoMode(QLineEdit::Password);
    ui2->PassEdit->setEnabled(false);
    ui2->PassEditChk->setEnabled(false);
}

UserSetup::~UserSetup()
{
    UserLogon *userlogonWindow;
    userlogonWindow->show();
    delete ui2;
}

bool UserSetup::CheckUsrName()
{
    if (CheckUser())
    {
        QMessageBox::warning(this, "用户已经存在","您输入的用户名已经被使用，请重新输入", QMessageBox::Yes);
        return false;
    } else
    {
        return true;
    }
}

void UserSetup::on_lineEdit_textEdited(const QString &arg1)
{
    ui2->PassEdit->setEnabled(ui2->lineEdit->hasAcceptableInput());
    ui2->PassEdit->clear();
    ui2->PassEditChk->clear();
}

void UserSetup::on_PassEdit_textEdited(const QString &arg1)
{
    ui2->PassEditChk->setEnabled(ui2->PassEdit->hasAcceptableInput());
}

bool UserSetup::validateCurrentPage()
{

    if(2 == this->currentPage()->nextId())
    {
        if(ui2->lineEdit->text().trimmed() == "")
        {
            QMessageBox::warning(this, "用户名不能为空","你还没有输入用户名，请填写用户名和密码以继续。", QMessageBox::Yes);
            return false;
        } else if (!CheckUsrName())
        {
            return false;
        } else
        {
            vector<_syrah_user*>& uTable = _syrah_userTable;
            uTable.push_back(new _syrah_user(ui2->lineEdit->text().trimmed(),ui2->PassEdit->text().trimmed()));
            delete uTable[0];
            return true;
        }
    }  else
        return true;
}

bool UserSetup::CheckUser()
{
    QString FileName;
    FileName.append("mail/").append(ui2->lineEdit->text().trimmed()).append(".box");
    QFile UsrDBName;
    UsrDBName.setFileName(FileName);
    qDebug() << "is Template Exist?" << QFile::exists("mail/sysDb");
    qDebug() << QDir::current();
    if(!UsrDBName.exists())
        return false;
    else
    {
        return true;
    }
}
