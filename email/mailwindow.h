/*mainmial.h
 *This .h file is to extern all the variables that will be used in the Mail part.
 *Alan Ruijia & Dec. 9th
 */

#ifndef MAILWINDOW_H
#define MAILWINDOW_H
#include <QWidget>
#include <QtGui>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <string>
#include <QToolBar>
namespace Ui {
class MailWindow;
}

class MailWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MailWindow(QWidget *parent = 0);
    ~MailWindow();

private slots:
    void send();
private:
    Ui::MailWindow *ui;
    QLabel *var_Sender,                    //var_Sender: The Label of Sender name;
           *var_Title,                     //var_Title: The Label of Title;
           *var_file;                      //var_file: If the mail can send files, it will be the Label of the file.
    QPushButton *var_Send,                 // var_Send: Sending mail button;
                *var_Save;                 // var_Save: The button to save the mail as a draft
    QLineEdit *var_SendLine,               //var_SendLine: This variable is to store the sending address.
              *var_TitleLine;              //var_TitleLine: This variable is to store the title;
    QTextEdit *var_Content;                //The variable is to store the content  of the mail.
    QGridLayout *var_uppart;
    QVBoxLayout *var_downpart,
                *var_mainlayout;

    QToolBar *HtmlToolBar;
    QAction *var_Font,
            *Size,
            *Color;

    bool Check();
};

#endif // MAILWINDOW_H
