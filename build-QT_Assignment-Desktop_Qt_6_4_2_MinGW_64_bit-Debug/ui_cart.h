/********************************************************************************
** Form generated from reading UI file 'cart.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
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
            Cart->setObjectName("Cart");
        Cart->resize(640, 480);
        pushButton_Recharge = new QPushButton(Cart);
        pushButton_Recharge->setObjectName("pushButton_Recharge");
        pushButton_Recharge->setGeometry(QRect(40, 420, 231, 41));
        lineEdit_Recharge = new QLineEdit(Cart);
        lineEdit_Recharge->setObjectName("lineEdit_Recharge");
        lineEdit_Recharge->setGeometry(QRect(320, 420, 261, 31));
        label_balanceVal_cart = new QLabel(Cart);
        label_balanceVal_cart->setObjectName("label_balanceVal_cart");
        label_balanceVal_cart->setGeometry(QRect(250, 350, 61, 16));
        label_balance_cart = new QLabel(Cart);
        label_balance_cart->setObjectName("label_balance_cart");
        label_balance_cart->setGeometry(QRect(150, 350, 111, 20));
        label_Currency_cart = new QLabel(Cart);
        label_Currency_cart->setObjectName("label_Currency_cart");
        label_Currency_cart->setGeometry(QRect(330, 350, 41, 16));
        label_balance_cart_2 = new QLabel(Cart);
        label_balance_cart_2->setObjectName("label_balance_cart_2");
        label_balance_cart_2->setGeometry(QRect(150, 300, 111, 20));
        pushButton = new QPushButton(Cart);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 300, 151, 31));
        viewitems = new QLabel(Cart);
        viewitems->setObjectName("viewitems");
        viewitems->setGeometry(QRect(180, 70, 351, 201));
        totalprice = new QLabel(Cart);
        totalprice->setObjectName("totalprice");
        totalprice->setGeometry(QRect(270, 300, 111, 16));
        errormessage = new QLabel(Cart);
        errormessage->setObjectName("errormessage");
        errormessage->setGeometry(QRect(150, 390, 421, 20));

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
