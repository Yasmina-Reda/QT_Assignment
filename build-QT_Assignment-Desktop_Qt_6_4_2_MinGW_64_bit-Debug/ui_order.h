/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Order
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_Price;
    QLabel *label_showNumItems;
    QLabel *label_showPrice;
    QPushButton *pushButton_addCart;
    QPushButton *pushButton_viewCart;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_balanceVal_order;
    QLabel *label_balance_order;
    QLabel *label_Currency_order;
    QLabel *label_numItems;
    QComboBox *chicken;
    QComboBox *meat;
    QComboBox *sideoptions;
    QComboBox *beverages;
    QComboBox *sauces;
    QLabel *showstatus;

    void setupUi(QDialog *Order)
    {
        if (Order->objectName().isEmpty())
            Order->setObjectName("Order");
        Order->resize(640, 480);
        label = new QLabel(Order);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 81, 21));
        label_2 = new QLabel(Order);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 40, 221, 21));
        label_3 = new QLabel(Order);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 120, 181, 21));
        label_Price = new QLabel(Order);
        label_Price->setObjectName("label_Price");
        label_Price->setGeometry(QRect(90, 260, 131, 31));
        label_showNumItems = new QLabel(Order);
        label_showNumItems->setObjectName("label_showNumItems");
        label_showNumItems->setGeometry(QRect(300, 310, 61, 16));
        label_showPrice = new QLabel(Order);
        label_showPrice->setObjectName("label_showPrice");
        label_showPrice->setGeometry(QRect(230, 260, 61, 31));
        pushButton_addCart = new QPushButton(Order);
        pushButton_addCart->setObjectName("pushButton_addCart");
        pushButton_addCart->setGeometry(QRect(380, 270, 171, 41));
        pushButton_viewCart = new QPushButton(Order);
        pushButton_viewCart->setObjectName("pushButton_viewCart");
        pushButton_viewCart->setGeometry(QRect(170, 380, 241, 31));
        label_10 = new QLabel(Order);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(450, 30, 221, 16));
        label_11 = new QLabel(Order);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(450, 100, 221, 16));
        label_12 = new QLabel(Order);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(450, 170, 211, 16));
        label_balanceVal_order = new QLabel(Order);
        label_balanceVal_order->setObjectName("label_balanceVal_order");
        label_balanceVal_order->setGeometry(QRect(260, 420, 111, 16));
        label_balance_order = new QLabel(Order);
        label_balance_order->setObjectName("label_balance_order");
        label_balance_order->setGeometry(QRect(170, 420, 81, 16));
        label_Currency_order = new QLabel(Order);
        label_Currency_order->setObjectName("label_Currency_order");
        label_Currency_order->setGeometry(QRect(390, 420, 41, 16));
        label_numItems = new QLabel(Order);
        label_numItems->setObjectName("label_numItems");
        label_numItems->setGeometry(QRect(90, 300, 201, 31));
        chicken = new QComboBox(Order);
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->addItem(QString());
        chicken->setObjectName("chicken");
        chicken->setGeometry(QRect(40, 70, 141, 22));
        meat = new QComboBox(Order);
        meat->addItem(QString());
        meat->addItem(QString());
        meat->addItem(QString());
        meat->addItem(QString());
        meat->addItem(QString());
        meat->addItem(QString());
        meat->addItem(QString());
        meat->addItem(QString());
        meat->setObjectName("meat");
        meat->setGeometry(QRect(40, 150, 141, 22));
        sideoptions = new QComboBox(Order);
        sideoptions->addItem(QString());
        sideoptions->addItem(QString());
        sideoptions->addItem(QString());
        sideoptions->addItem(QString());
        sideoptions->addItem(QString());
        sideoptions->setObjectName("sideoptions");
        sideoptions->setGeometry(QRect(450, 60, 141, 22));
        beverages = new QComboBox(Order);
        beverages->addItem(QString());
        beverages->addItem(QString());
        beverages->addItem(QString());
        beverages->addItem(QString());
        beverages->addItem(QString());
        beverages->setObjectName("beverages");
        beverages->setGeometry(QRect(450, 130, 141, 22));
        sauces = new QComboBox(Order);
        sauces->addItem(QString());
        sauces->addItem(QString());
        sauces->addItem(QString());
        sauces->addItem(QString());
        sauces->addItem(QString());
        sauces->addItem(QString());
        sauces->addItem(QString());
        sauces->setObjectName("sauces");
        sauces->setGeometry(QRect(450, 190, 141, 22));
        showstatus = new QLabel(Order);
        showstatus->setObjectName("showstatus");
        showstatus->setGeometry(QRect(140, 240, 191, 16));

        retranslateUi(Order);

        QMetaObject::connectSlotsByName(Order);
    } // setupUi

    void retranslateUi(QDialog *Order)
    {
        Order->setWindowTitle(QCoreApplication::translate("Order", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Order", "My Order", nullptr));
        label_2->setText(QCoreApplication::translate("Order", "Chicken Options", nullptr));
        label_3->setText(QCoreApplication::translate("Order", "Meat Options", nullptr));
        label_Price->setText(QCoreApplication::translate("Order", "Item Price:", nullptr));
        label_showNumItems->setText(QString());
        label_showPrice->setText(QString());
        pushButton_addCart->setText(QCoreApplication::translate("Order", "Add to Cart", nullptr));
        pushButton_viewCart->setText(QCoreApplication::translate("Order", "View Cart", nullptr));
        label_10->setText(QCoreApplication::translate("Order", "Side Options", nullptr));
        label_11->setText(QCoreApplication::translate("Order", "Beverages", nullptr));
        label_12->setText(QCoreApplication::translate("Order", "Sauces", nullptr));
        label_balanceVal_order->setText(QString());
        label_balance_order->setText(QCoreApplication::translate("Order", "Balance:", nullptr));
        label_Currency_order->setText(QCoreApplication::translate("Order", "L.E.", nullptr));
        label_numItems->setText(QCoreApplication::translate("Order", "Number of Added Items", nullptr));
        chicken->setItemText(0, QString());
        chicken->setItemText(1, QCoreApplication::translate("Order", "Fried Chicken-1 piece", nullptr));
        chicken->setItemText(2, QCoreApplication::translate("Order", "Fried Chicken-2 pieces", nullptr));
        chicken->setItemText(3, QCoreApplication::translate("Order", "Fried Chicken-7 pieces", nullptr));
        chicken->setItemText(4, QCoreApplication::translate("Order", "Fried Chicken-10 pieces", nullptr));
        chicken->setItemText(5, QCoreApplication::translate("Order", "Chicken Sandwich-Small", nullptr));
        chicken->setItemText(6, QCoreApplication::translate("Order", "Chicken Sandwich-Medium", nullptr));
        chicken->setItemText(7, QCoreApplication::translate("Order", "Chicken Sandwich-Large", nullptr));
        chicken->setItemText(8, QCoreApplication::translate("Order", "Grilled Chicken", nullptr));

        meat->setItemText(0, QString());
        meat->setItemText(1, QCoreApplication::translate("Order", "Steak-1 piece", nullptr));
        meat->setItemText(2, QCoreApplication::translate("Order", "Steak-2 pieces", nullptr));
        meat->setItemText(3, QCoreApplication::translate("Order", "Steak-3 pieces", nullptr));
        meat->setItemText(4, QCoreApplication::translate("Order", "Beef Burger-Small", nullptr));
        meat->setItemText(5, QCoreApplication::translate("Order", "Beef Burger-Medium", nullptr));
        meat->setItemText(6, QCoreApplication::translate("Order", "Beef Burger-Large", nullptr));
        meat->setItemText(7, QCoreApplication::translate("Order", "Burger Steak", nullptr));

        sideoptions->setItemText(0, QString());
        sideoptions->setItemText(1, QCoreApplication::translate("Order", "Rice", nullptr));
        sideoptions->setItemText(2, QCoreApplication::translate("Order", "Fries", nullptr));
        sideoptions->setItemText(3, QCoreApplication::translate("Order", "Pasta", nullptr));
        sideoptions->setItemText(4, QCoreApplication::translate("Order", "Vegetables", nullptr));

        beverages->setItemText(0, QString());
        beverages->setItemText(1, QCoreApplication::translate("Order", "Orange Juice", nullptr));
        beverages->setItemText(2, QCoreApplication::translate("Order", "Soft Drink", nullptr));
        beverages->setItemText(3, QCoreApplication::translate("Order", "Water", nullptr));
        beverages->setItemText(4, QCoreApplication::translate("Order", "Coffee", nullptr));

        sauces->setItemText(0, QString());
        sauces->setItemText(1, QCoreApplication::translate("Order", "Ketchup", nullptr));
        sauces->setItemText(2, QCoreApplication::translate("Order", "Mayonnaise", nullptr));
        sauces->setItemText(3, QCoreApplication::translate("Order", "Mustard", nullptr));
        sauces->setItemText(4, QCoreApplication::translate("Order", "Honey Mustard", nullptr));
        sauces->setItemText(5, QCoreApplication::translate("Order", "Thousand Islands", nullptr));
        sauces->setItemText(6, QCoreApplication::translate("Order", "BBQ", nullptr));

        showstatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Order: public Ui_Order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
