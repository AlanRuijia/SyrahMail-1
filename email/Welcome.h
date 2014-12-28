#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mailaccconfig.h>

namespace Ui {
class Welcome;
}

class Welcome : public QMainWindow
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Welcome *ui;
    MailAccConfig ui2;
};

#endif // MAINWINDOW_H
