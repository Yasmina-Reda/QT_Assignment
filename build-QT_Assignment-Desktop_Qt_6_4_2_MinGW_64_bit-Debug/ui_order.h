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
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_Price;
    QLabel *label_showNumItems;
    QLabel *label_showPrice;
    QPushButton *pushButton_addCart;
    QPushButton *pushButton_viewCart;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_balanceVal_order;
    QLabel *label_balance_order;
    QLabel *label_Currency_order;
    QLabel *label_numItems;

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
        label_2->setGeometry(QRect(40, 40, 101, 21));
        label_3 = new QLabel(Order);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 120, 81, 21));
        comboBox = new QComboBox(Order);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 70, 161, 31));
        comboBox_2 = new QComboBox(Order);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(40, 150, 161, 31));
        label_Price = new QLabel(Order);
        label_Price->setObjectName("label_Price");
        label_Price->setGeometry(QRect(140, 260, 81, 31));
        label_showNumItems = new QLabel(Order);
        label_showNumItems->setObjectName("label_showNumItems");
        label_showNumItems->setGeometry(QRect(300, 310, 61, 16));
        label_showPrice = new QLabel(Order);
        label_showPrice->setObjectName("label_showPrice");
        label_showPrice->setGeometry(QRect(230, 260, 61, 31));
        pushButton_addCart = new QPushButton(Order);
        pushButton_addCart->setObjectName("pushButton_addCart");
        pushButton_addCart->setGeometry(QRect(380, 270, 91, 41));
        pushButton_viewCart = new QPushButton(Order);
        pushButton_viewCart->setObjectName("pushButton_viewCart");
        pushButton_viewCart->setGeometry(QRect(170, 380, 241, 31));
        comboBox_3 = new QComboBox(Order);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(450, 60, 101, 21));
        comboBox_4 = new QComboBox(Order);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(450, 130, 101, 22));
        comboBox_5 = new QComboBox(Order);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(450, 190, 101, 22));
        label_10 = new QLabel(Order);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(450, 30, 91, 16));
        label_11 = new QLabel(Order);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(450, 100, 51, 16));
        label_12 = new QLabel(Order);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(450, 170, 37, 12));
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
        label_numItems->setGeometry(QRect(140, 300, 151, 31));

        retranslateUi(Order);

        QMetaObject::connectSlotsByName(Order);
    } // setupUi

    void retranslateUi(QDialog *Order)
    {
        Order->setWindowTitle(QCoreApplication::translate("Order", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Order", "My Order", nullptr));
        label_2->setText(QCoreApplication::translate("Order", "Chicken Options", nullptr));
        label_3->setText(QCoreApplication::translate("Order", "Meat Options", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Order", "Fried Chicken-1 piece", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Order", "Fried Chicken-2 pieces", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Order", "Fried Chicken-7 pieces", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Order", "Fried Chicken-10 pieces", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Order", "Chicken Sandwich-Small", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Order", "Chicken Sandwich-Medium", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Order", "Chicken Sandwich-Large", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Order", "Grilled Chicken", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Order", "Steak-1 piece", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Order", "Steak-2 pieces", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Order", "Steak-3 pieces", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Order", "Beef Burger-Small", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Order", "Beef Burger-Medium", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("Order", "Beef Burger-Large", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("Order", "Burger Steak", nullptr));

        label_Price->setText(QCoreApplication::translate("Order", "Item Price:", nullptr));
        label_showNumItems->setText(QCoreApplication::translate("Order", "label", nullptr));
        label_showPrice->setText(QCoreApplication::translate("Order", "label", nullptr));
        pushButton_addCart->setText(QCoreApplication::translate("Order", "Add to Cart", nullptr));
        pushButton_viewCart->setText(QCoreApplication::translate("Order", "View Cart", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Order", "Fries", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Order", "Pasta", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Order", "Rice", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Order", "Vegetables", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("Order", "Orange Juice", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Order", "Soft Drink", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Order", "Water", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Order", "Coffee", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("Order", "Ketchup", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("Order", "Mayonnaise", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("Order", "Mustard", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("Order", "Honey Mustard", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("Order", "Thousand Islands", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("Order", "BBQ", nullptr));

        label_10->setText(QCoreApplication::translate("Order", "Side Options", nullptr));
        label_11->setText(QCoreApplication::translate("Order", "Beverages", nullptr));
        label_12->setText(QCoreApplication::translate("Order", "Sauces", nullptr));
        label_balanceVal_order->setText(QString());
        label_balance_order->setText(QCoreApplication::translate("Order", "Balance:", nullptr));
        label_Currency_order->setText(QCoreApplication::translate("Order", "L.E.", nullptr));
        label_numItems->setText(QCoreApplication::translate("Order", "Number of Added Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Order: public Ui_Order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
