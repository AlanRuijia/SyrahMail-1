#include "mailwindow.h"
//#include "store.h"
#include "ui_mailwindow.h"
#include <iostream>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

#include "smtpclient.h"
#include "mimepart.h"
#include "mimemessage.h"
#include "mimetext.h"
#include "mimehtml.h"

_syrah_mail Mail;
MailWindow::MailWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MailWindow)
{
    ui->setupUi(this);
    var_Sender =new QLabel(tr("Send to: "));
    var_SendLine =new QLineEdit;
    var_Title = new QLabel(tr("The Title: "));
    var_TitleLine = new QLineEdit;
    var_Content = new QTextEdit;
    var_Send = new QPushButton(tr("Send"));

    QObject::connect(var_Send,SIGNAL(clicked()),this,SLOT(send()));

    HtmlToolBar = new QToolBar;
    var_Font = new QAction(tr("&Font"),this);
    Size = new QAction(tr("&Size"),this);
    var_Font->setStatusTip(tr("Adjust the font"));
    Size->setStatusTip(tr("Adjust the Size"));
//还需要添加提示的label!!!群发
   HtmlToolBar->addAction(var_Font);
    HtmlToolBar->addAction(Size);
//    QObject::connect(Size,SIGNAL(triggered()),f,SLOT(open()));

    var_uppart=new QGridLayout;
    var_downpart=new QVBoxLayout;
    var_mainlayout=new QVBoxLayout;
    var_uppart->addWidget(var_Sender,0,0);
    var_uppart->addWidget(var_SendLine,0,1);
    var_uppart->addWidget(var_Title,1,0);
    var_uppart->addWidget(var_TitleLine,1,1);
    var_uppart->addWidget(var_Send,0,2);

    var_downpart->addWidget(HtmlToolBar);
    var_downpart->addWidget(var_Content);

    var_mainlayout->addLayout(var_uppart);
    var_mainlayout->addLayout(var_downpart);
    setLayout(var_mainlayout);
}

MailWindow::~MailWindow()
{
    delete ui;
}


void MailWindow::send()
{
        //实例化发送邮件对象
        SmtpClient smtp("smtp.163.com",
                        25,
                        SmtpClient::TcpConnection);//ui->ckSSL->isChecked()?SmtpClient::SslConnection:SmtpClient::TcpConnection
        smtp.setUser("maorjgs@163.com");
        smtp.setPassword("maoruijia");

        //构建邮件主题,包含发件人收件人附件等.
        MimeMessage message;
        message.setSender(new EmailAddress("maorjgs@163.com"));

        //逐个添加收件人
        QStringList receiver = var_SendLine->text().split(';');
         for (int i = 0; i < receiver.size(); i++){
            message.addRecipient(new EmailAddress(receiver.at(i)));
         }
        //构建邮件标题
        message.setSubject(var_TitleLine->text());

        //构建邮件正文
         MimeHtml text;
         text.setHtml(var_Content->toHtml());

           //如果直接发送简单文本,使用以下方法
           //MimeText text;
           //text.setText(var_Content->toPlainText());

        message.addPart(&text);

        //构建附件
//        QString atta=ui->txtAtta->text();
 //       if (atta!=""){
  //          QStringList attas=atta.split(";");
   //         foreach (QString tempAtta, attas) {
  //              QFile *file=new QFile(tempAtta);
  //              if (file->exists()){
  //                  message.addPart(new MimeAttachment(file));
  //              }
  //          }
  //      }

        if (!smtp.connectToHost()){
            QMessageBox::critical(this,"Error","Connecting server failed.");
            return;
        }
        if (!smtp.login()){
            QMessageBox::critical(this,"Error","The Login failed.");
            return;
        }
        if (!smtp.sendMail(message)){
            QMessageBox::critical(this,"Error","The sending process failed.");
            return;
        }else{
            QMessageBox::information(this,tr("Sucess"),tr("The email has been sucessfully sended."));
        }
        smtp.quit();
}
