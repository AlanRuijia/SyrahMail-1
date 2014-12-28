#include "userlogon.h"
#include "ui_userlogon.h"
#include <QMessageBox>
#include <vector>
#include <_syrah_user.h>
#include "Welcome.h"
#include <mainwindow.h>
#include <stdio.h>

extern vector <_syrah_user*> _syrah_userTable;

UserLogon::UserLogon(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserLogon)
{
    ui->setupUi(this);
    ui->PassWdEdit->setEnabled(false);
    ui->PassWdEdit->setEchoMode(QLineEdit::Password);
    ui->BtnLogon->setEnabled(ui->PassWdEdit->hasAcceptableInput());
}

UserLogon::~UserLogon()
{
    delete ui;
}

void UserLogon::on_UserNameEdit_textEdited(const QString &arg1)
{
    ui->PassWdEdit->setEnabled(ui->UserNameEdit->hasAcceptableInput());
}

void UserLogon::on_PassWdEdit_textEdited(const QString &arg1)
{
    ui->BtnLogon->setEnabled(ui->PassWdEdit->hasAcceptableInput());
}

void UserLogon::on_BtnCancel_clicked()
{

    this->close();
}

void UserLogon::on_BtnLogon_clicked()
{
    if(CheckUser())
    {
        //_syrah_userTable.push_back(new _syrah_user(ui->UserNameEdit->text().trimmed(),ui->PassWdEdit->text().trimmed()));
        //_syrah_userTable[0]->preview();
        _syrah_userTable[0]->Query();

        QMessageBox::information(this, "登录成功","登录成功", QMessageBox::Yes);
        emit UserLogonStateChanged();
        delete _syrah_userTable[0];

        this->close();
      //  Welcome *w = new Welcome;
       // w->show();

    } else if (ui->UserNameEdit->text().trimmed() == "")
    {
        QMessageBox::warning(this, "用户名为空","用户名不能为空，请输入用户名和密码", QMessageBox::Yes);
        LoginState = false;
    }
    else
    {
        QMessageBox::warning(this, "账户不存在","您输入的账户不存在，请先注册新用户", QMessageBox::Yes);
        LoginState = false;
        ui->UserNameEdit->clear();
        ui->UserNameEdit->setFocus();
    }
}

void UserLogon::on_BtnNewUsr_clicked()
{
    this->close();
    ui2.show();
}

bool UserLogon::CheckUser()
{
    QString FileName;
    FileName.append("mail/").append(ui->UserNameEdit->text().trimmed()).append(".box");
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

