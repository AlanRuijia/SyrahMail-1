/********************************************************************************
** Form generated from reading UI file 'Welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QStringLiteral("MainWindow"));
        Welcome->resize(673, 445);
        centralWidget = new QWidget(Welcome);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 30, 351, 41));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(60, 120, 551, 192));
        graphicsView->setAutoFillBackground(true);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 350, 151, 32));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 551, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 350, 111, 32));
        Welcome->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Welcome);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 22));
        Welcome->setMenuBar(menuBar);

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QMainWindow *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">\344\275\277\347\224\250SyrahMail\347\256\241\347\220\206\344\275\240\347\232\204\351\202\256\344\273\266</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\351\202\256\344\273\266\350\264\246\346\210\267", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250SyrahMail\357\274\214\347\216\260\345\234\250\344\275\240\345\217\257\344\273\245\346\267\273\345\212\240\344\270\200\344\270\252\347\224\265\345\255\220\351\202\256\344\273\266\350\264\246\346\210\267\357\274\214\344\273\245\344\275\277\347\224\250SyrahMail\345\217\221\351\200\201\345\222\214\346\216\245\346\224\266\351\202\256\344\273\266\343\200\202", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
