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

    void setupUi(QDialog *Cart)
    {
        if (Cart->objectName().isEmpty())
            Cart->setObjectName("Cart");
        Cart->resize(640, 480);
        pushButton_Recharge = new QPushButton(Cart);
        pushButton_Recharge->setObjectName("pushButton_Recharge");
        pushButton_Recharge->setGeometry(QRect(160, 230, 161, 41));
        lineEdit_Recharge = new QLineEdit(Cart);
        lineEdit_Recharge->setObjectName("lineEdit_Recharge");
        lineEdit_Recharge->setGeometry(QRect(350, 230, 171, 31));
        label_balanceVal_cart = new QLabel(Cart);
        label_balanceVal_cart->setObjectName("label_balanceVal_cart");
        label_balanceVal_cart->setGeometry(QRect(320, 190, 111, 16));
        label_balance_cart = new QLabel(Cart);
        label_balance_cart->setObjectName("label_balance_cart");
        label_balance_cart->setGeometry(QRect(230, 190, 81, 16));
        label_Currency_cart = new QLabel(Cart);
        label_Currency_cart->setObjectName("label_Currency_cart");
        label_Currency_cart->setGeometry(QRect(450, 190, 41, 16));

        retranslateUi(Cart);

        QMetaObject::connectSlotsByName(Cart);
    } // setupUi

    void retranslateUi(QDialog *Cart)
    {
        Cart->setWindowTitle(QCoreApplication::translate("Cart", "Dialog", nullptr));
        pushButton_Recharge->setText(QCoreApplication::translate("Cart", "Recharge Balance", nullptr));
        label_balanceVal_cart->setText(QCoreApplication::translate("Cart", "label", nullptr));
        label_balance_cart->setText(QCoreApplication::translate("Cart", "Balance:", nullptr));
        label_Currency_cart->setText(QCoreApplication::translate("Cart", "L.E.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cart: public Ui_Cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
