#include "mailaccconfig.h"
#include "ui_mailaccconfig.h"
#include <QMessageBox>


MailAccConfig::MailAccConfig(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::MailAccConfig)
{
    ui->setupUi(this);
    AccNum = 0;
    port = 25;
}


MailAccConfig::~MailAccConfig()
{
    delete ui;
}

bool MailAccConfig::validateCurrentPage()
{

    if(3 == this->currentPage()->nextId())
    {
        if(ui->MailAcc->text().trimmed() == "")
        {
            QMessageBox::warning(this, "请输入账户名","请输入有效的电子邮件账户名", QMessageBox::Yes);
            return false;
        } else
        if(ui->MailPassWd->text().trimmed() == "")
        {
            QMessageBox::warning(this, "请输入密码","请输入该账户的密码", QMessageBox::Yes);
            return false;
        } else
        {
            bool a;
            ui->verifyacc->setEnabled(true);
            smtp = new smtplogin;

            if(!smtp->loginevent(ui->MailAcc->text(), ui->MailPassWd->text(), MailSendServer, port))
            {
              qDebug() << "a is false";
              QMessageBox::warning(this, "登录失败","请检查该账户的用户名和密码", QMessageBox::Yes);
              return false;
            }
        }
    }
    if(2 == this->currentPage()->nextId())
    {
        if(AccNum == 0)
        {
            QMessageBox::warning(this, " ","请选择你的电子邮件服务商", QMessageBox::Yes);
            return false;
        }
    }

    if(4 == this->currentPage()->nextId())
    {
        if(ui->MailBoxName->text().trimmed() == "")
        {
            return true;
        }
        else
        {
            MailBoxName = ui->MailBoxName->text().trimmed();
            qDebug() << MailBoxName;
            return true;
        }
    }
    return true;
}

void MailAccConfig::on_Btn163_pressed()
{
    AccNum = 1;
    MailSendServer = "smtp.163.com";
    MailRecvServer = "pop.163.com";
    //QMessageBox::warning(this, " ","所选服务商暂时不可用，请选择其他选项", QMessageBox::Yes);
    MailBoxName = "163";
}

void MailAccConfig::on_Btn126_pressed()
{
    AccNum = 2;
    MailSendServer = "smtp.126.com";
    MailRecvServer = "pop.126.com";
    //QMessageBox::warning(this, " ","所选服务商暂时不可用，请选择其他选项", QMessageBox::Yes);
    MailBoxName = "126";
}

void MailAccConfig::on_BtnQQ_pressed()
{
    MailSendServer = "smtp.qq.com";
    MailRecvServer = "pop.qq.com";
    AccNum = 3;
    MailBoxName = "QQ";
}

void MailAccConfig::on_BtnGoogle_pressed()
{
    AccNum = 4;
    MailSendServer = "smtp.gmail.com";
    MailRecvServer = "pop.gmail.com";
    //QMessageBox::warning(this, " ","所选服务商暂时不可用，请选择其他选项", QMessageBox::Yes);
    MailBoxName = "Google";
}

void MailAccConfig::on_BtnYahoo_pressed()
{
    AccNum = 5;
    MailSendServer = "smtp.mail.yahoo.com";
    MailRecvServer = "pop.mail.yahoo.com";
    //QMessageBox::warning(this, " ","所选服务商暂时不可用，请选择其他选项", QMessageBox::Yes);
    MailBoxName = "Yahoo";
}

void MailAccConfig::on_BtnElse_pressed()
{
    //AccNum = 0;
    QMessageBox::warning(this, " ","所选服务商暂时不可用，请选择其他选项", QMessageBox::Yes);
    MailBoxName = "My Mailbox";
}

void MailAccConfig::on_MailAcc_editingFinished()
{
    MailAccount = ui->MailAcc->text().trimmed();
}

void MailAccConfig::on_MailPassWd_editingFinished()
{
    MailAccPassWd = ui->MailPassWd->text().trimmed();
}

bool MailAccConfig::checkis()
{
    return smtp->AccLoginState();
}

