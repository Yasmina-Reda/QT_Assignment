/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Cart
{
public:
    QPushButton *pushButton_Recharge;
    QLineEdit *lineEdit_Recharge;
    QLabel *label_balanceVal_cart;
    QLabel *label_balance_cart;
    QLabel *label_Currency_cart;
    QLabel *label_balance_cart_2;
    QPushButton *pushButton;
    QLabel *viewitems;
    QLabel *totalprice;
    QLabel *errormessage;

    void setupUi(QDialog *Cart)
    {
        if (Cart->objectName().isEmpty())
            Cart->setObjectName(QString::fromUtf8("Cart"));
        Cart->resize(640, 480);
        pushButton_Recharge = new QPushButton(Cart);
        pushButton_Recharge->setObjectName(QString::fromUtf8("pushButton_Recharge"));
        pushButton_Recharge->setGeometry(QRect(160, 260, 231, 41));
        lineEdit_Recharge = new QLineEdit(Cart);
        lineEdit_Recharge->setObjectName(QString::fromUtf8("lineEdit_Recharge"));
        lineEdit_Recharge->setGeometry(QRect(460, 270, 171, 31));
        label_balanceVal_cart = new QLabel(Cart);
        label_balanceVal_cart->setObjectName(QString::fromUtf8("label_balanceVal_cart"));
        label_balanceVal_cart->setGeometry(QRect(300, 190, 61, 16));
        label_balance_cart = new QLabel(Cart);
        label_balance_cart->setObjectName(QString::fromUtf8("label_balance_cart"));
        label_balance_cart->setGeometry(QRect(200, 190, 111, 20));
        label_Currency_cart = new QLabel(Cart);
        label_Currency_cart->setObjectName(QString::fromUtf8("label_Currency_cart"));
        label_Currency_cart->setGeometry(QRect(380, 190, 41, 16));
        label_balance_cart_2 = new QLabel(Cart);
        label_balance_cart_2->setObjectName(QString::fromUtf8("label_balance_cart_2"));
        label_balance_cart_2->setGeometry(QRect(200, 140, 111, 20));
        pushButton = new QPushButton(Cart);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 140, 151, 31));
        viewitems = new QLabel(Cart);
        viewitems->setObjectName(QString::fromUtf8("viewitems"));
        viewitems->setGeometry(QRect(210, 20, 231, 101));
        totalprice = new QLabel(Cart);
        totalprice->setObjectName(QString::fromUtf8("totalprice"));
        totalprice->setGeometry(QRect(320, 140, 111, 16));
        errormessage = new QLabel(Cart);
        errormessage->setObjectName(QString::fromUtf8("errormessage"));
        errormessage->setGeometry(QRect(200, 230, 421, 20));

        retranslateUi(Cart);

        QMetaObject::connectSlotsByName(Cart);
    } // setupUi

    void retranslateUi(QDialog *Cart)
    {
        Cart->setWindowTitle(QCoreApplication::translate("Cart", "Dialog", nullptr));
        pushButton_Recharge->setText(QCoreApplication::translate("Cart", "Recharge Balance", nullptr));
        label_balanceVal_cart->setText(QString());
        label_balance_cart->setText(QCoreApplication::translate("Cart", "Balance:", nullptr));
        label_Currency_cart->setText(QCoreApplication::translate("Cart", "L.E.", nullptr));
        label_balance_cart_2->setText(QCoreApplication::translate("Cart", "Total:", nullptr));
        pushButton->setText(QCoreApplication::translate("Cart", "Buy Items", nullptr));
        viewitems->setText(QString());
        totalprice->setText(QString());
        errormessage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Cart: public Ui_Cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
