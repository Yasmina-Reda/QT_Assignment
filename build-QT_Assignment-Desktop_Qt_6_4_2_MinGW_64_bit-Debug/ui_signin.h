/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QWidget *centralwidget;
    QLabel *label_WLCM;
    QLabel *label_Prompt;
    QLabel *label_userprompt;
    QLabel *label_pswdprompt;
    QLineEdit *lineEdit_userName;
    QLineEdit *lineEdit_pswd;
    QPushButton *pushButton_signin;
    QLabel *label_balance;
    QLabel *label_balanceVal;
    QLabel *label_Warning;
    QPushButton *pushButton_signUp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName("SignIn");
        SignIn->resize(943, 600);
        centralwidget = new QWidget(SignIn);
        centralwidget->setObjectName("centralwidget");
        label_WLCM = new QLabel(centralwidget);
        label_WLCM->setObjectName("label_WLCM");
        label_WLCM->setGeometry(QRect(350, 10, 321, 31));
        label_Prompt = new QLabel(centralwidget);
        label_Prompt->setObjectName("label_Prompt");
        label_Prompt->setGeometry(QRect(310, 40, 411, 31));
        label_userprompt = new QLabel(centralwidget);
        label_userprompt->setObjectName("label_userprompt");
        label_userprompt->setGeometry(QRect(200, 80, 171, 41));
        label_pswdprompt = new QLabel(centralwidget);
        label_pswdprompt->setObjectName("label_pswdprompt");
        label_pswdprompt->setGeometry(QRect(200, 150, 161, 51));
        lineEdit_userName = new QLineEdit(centralwidget);
        lineEdit_userName->setObjectName("lineEdit_userName");
        lineEdit_userName->setGeometry(QRect(470, 80, 281, 51));
        lineEdit_pswd = new QLineEdit(centralwidget);
        lineEdit_pswd->setObjectName("lineEdit_pswd");
        lineEdit_pswd->setGeometry(QRect(470, 150, 281, 51));
        pushButton_signin = new QPushButton(centralwidget);
        pushButton_signin->setObjectName("pushButton_signin");
        pushButton_signin->setGeometry(QRect(290, 300, 111, 51));
        label_balance = new QLabel(centralwidget);
        label_balance->setObjectName("label_balance");
        label_balance->setGeometry(QRect(200, 220, 91, 61));
        label_balanceVal = new QLabel(centralwidget);
        label_balanceVal->setObjectName("label_balanceVal");
        label_balanceVal->setGeometry(QRect(310, 230, 141, 31));
        label_Warning = new QLabel(centralwidget);
        label_Warning->setObjectName("label_Warning");
        label_Warning->setGeometry(QRect(460, 340, 401, 31));
        pushButton_signUp = new QPushButton(centralwidget);
        pushButton_signUp->setObjectName("pushButton_signUp");
        pushButton_signUp->setGeometry(QRect(290, 370, 111, 51));
        SignIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignIn);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 943, 17));
        SignIn->setMenuBar(menubar);
        statusbar = new QStatusBar(SignIn);
        statusbar->setObjectName("statusbar");
        SignIn->setStatusBar(statusbar);

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QMainWindow *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "SignIn", nullptr));
        label_WLCM->setText(QCoreApplication::translate("SignIn", "Welcome To Our Outlet!", nullptr));
        label_Prompt->setText(QCoreApplication::translate("SignIn", "Please Sign in to Your Account To Proceed", nullptr));
        label_userprompt->setText(QCoreApplication::translate("SignIn", "Username:", nullptr));
        label_pswdprompt->setText(QCoreApplication::translate("SignIn", "Password:", nullptr));
        lineEdit_userName->setText(QString());
        pushButton_signin->setText(QCoreApplication::translate("SignIn", "Sign in", nullptr));
        label_balance->setText(QCoreApplication::translate("SignIn", "Balance:", nullptr));
        label_balanceVal->setText(QString());
        label_Warning->setText(QString());
        pushButton_signUp->setText(QCoreApplication::translate("SignIn", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
