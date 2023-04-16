/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signUp
{
public:
    QPushButton *pushButton;
    QLabel *label_errorMsg;
    QLabel *label_2;
    QLabel *label_userName;
    QLabel *label_pswd;
    QLabel *label_confirmPswd;
    QLineEdit *lineEdit_userName;
    QLineEdit *lineEdit_pswd;
    QLineEdit *lineEdit_confirmPswd;

    void setupUi(QDialog *signUp)
    {
        if (signUp->objectName().isEmpty())
            signUp->setObjectName("signUp");
        signUp->resize(887, 640);
        pushButton = new QPushButton(signUp);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 180, 151, 61));
        label_errorMsg = new QLabel(signUp);
        label_errorMsg->setObjectName("label_errorMsg");
        label_errorMsg->setGeometry(QRect(130, 300, 441, 31));
        label_2 = new QLabel(signUp);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 30, 141, 51));
        label_userName = new QLabel(signUp);
        label_userName->setObjectName("label_userName");
        label_userName->setGeometry(QRect(140, 110, 151, 41));
        label_pswd = new QLabel(signUp);
        label_pswd->setObjectName("label_pswd");
        label_pswd->setGeometry(QRect(140, 170, 161, 31));
        label_confirmPswd = new QLabel(signUp);
        label_confirmPswd->setObjectName("label_confirmPswd");
        label_confirmPswd->setGeometry(QRect(140, 230, 181, 41));
        lineEdit_userName = new QLineEdit(signUp);
        lineEdit_userName->setObjectName("lineEdit_userName");
        lineEdit_userName->setGeometry(QRect(410, 110, 151, 41));
        lineEdit_pswd = new QLineEdit(signUp);
        lineEdit_pswd->setObjectName("lineEdit_pswd");
        lineEdit_pswd->setGeometry(QRect(410, 170, 151, 41));
        lineEdit_confirmPswd = new QLineEdit(signUp);
        lineEdit_confirmPswd->setObjectName("lineEdit_confirmPswd");
        lineEdit_confirmPswd->setGeometry(QRect(410, 230, 151, 41));

        retranslateUi(signUp);

        QMetaObject::connectSlotsByName(signUp);
    } // setupUi

    void retranslateUi(QDialog *signUp)
    {
        signUp->setWindowTitle(QCoreApplication::translate("signUp", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("signUp", "Sign up", nullptr));
        label_errorMsg->setText(QString());
        label_2->setText(QCoreApplication::translate("signUp", "Sign up", nullptr));
        label_userName->setText(QCoreApplication::translate("signUp", "User name", nullptr));
        label_pswd->setText(QCoreApplication::translate("signUp", "Password", nullptr));
        label_confirmPswd->setText(QCoreApplication::translate("signUp", "Confirm Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUp: public Ui_signUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
