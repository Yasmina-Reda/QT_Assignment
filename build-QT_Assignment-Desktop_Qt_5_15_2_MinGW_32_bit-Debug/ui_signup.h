/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
            signUp->setObjectName(QString::fromUtf8("signUp"));
        signUp->resize(480, 640);
        pushButton = new QPushButton(signUp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 180, 91, 31));
        label_errorMsg = new QLabel(signUp);
        label_errorMsg->setObjectName(QString::fromUtf8("label_errorMsg"));
        label_errorMsg->setGeometry(QRect(20, 180, 201, 31));
        label_2 = new QLabel(signUp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 30, 51, 16));
        label_userName = new QLabel(signUp);
        label_userName->setObjectName(QString::fromUtf8("label_userName"));
        label_userName->setGeometry(QRect(16, 80, 121, 20));
        label_pswd = new QLabel(signUp);
        label_pswd->setObjectName(QString::fromUtf8("label_pswd"));
        label_pswd->setGeometry(QRect(16, 110, 121, 20));
        label_confirmPswd = new QLabel(signUp);
        label_confirmPswd->setObjectName(QString::fromUtf8("label_confirmPswd"));
        label_confirmPswd->setGeometry(QRect(16, 140, 121, 20));
        lineEdit_userName = new QLineEdit(signUp);
        lineEdit_userName->setObjectName(QString::fromUtf8("lineEdit_userName"));
        lineEdit_userName->setGeometry(QRect(210, 70, 113, 20));
        lineEdit_pswd = new QLineEdit(signUp);
        lineEdit_pswd->setObjectName(QString::fromUtf8("lineEdit_pswd"));
        lineEdit_pswd->setGeometry(QRect(210, 100, 113, 20));
        lineEdit_confirmPswd = new QLineEdit(signUp);
        lineEdit_confirmPswd->setObjectName(QString::fromUtf8("lineEdit_confirmPswd"));
        lineEdit_confirmPswd->setGeometry(QRect(210, 130, 113, 20));

        retranslateUi(signUp);

        QMetaObject::connectSlotsByName(signUp);
    } // setupUi

    void retranslateUi(QDialog *signUp)
    {
        signUp->setWindowTitle(QCoreApplication::translate("signUp", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("signUp", "Sign up", nullptr));
        label_errorMsg->setText(QCoreApplication::translate("signUp", "Error message", nullptr));
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
