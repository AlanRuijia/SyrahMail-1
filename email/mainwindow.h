#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mailwindow.h"
#include "usersetup.h"
#include "userlogon.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_WriteMail_clicked();

    void on_actionSetup_triggered();

    void ShowWindow();

private slots:
    void on_actionAdd_Mail_account_triggered();

    void on_actionAdd_mail_account_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
