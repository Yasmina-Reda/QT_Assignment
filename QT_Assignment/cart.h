#ifndef CART_H
#define CART_H

#include <QDialog>

namespace Ui {
class Cart;
}

class Cart : public QDialog
{
    Q_OBJECT

public:
    explicit Cart(int*, int, int, int, int, int, QWidget *parent = nullptr);
    ~Cart();

private slots:
    void on_pushButton_Recharge_clicked();

    void on_pushButton_clicked();

private:
    Ui::Cart *ui;
    int* balanceRef;
    QString chickenItem[9]={" ","Fried Chicken-1 piece", "Fried Chicken-2 pieces", "Fried Chicken-7 pieces", "Fried Chicken-10 pieces", "Chicken Sandwich-Small", "Chicken Sandwich-Medium", "Chicken Sandwich-Large", "Grilled Chicken"};
    int chickenPrice[9]={0,20,35,120,175,40,65,80,120};
    QString beefItem[8] ={" ","Steak-1 piece", "Steak-2 pieces", "Steak-3 pieces", "Beef Burger-Small", "Beef Burger-Medium", "Beef Burger-Large", "Burger Steak"};
    int beefPrice[8]={0,80,150,220,60,85,100,140};
    QString sideItem[5]={" ","Rice", "Fries", "Pasta", "Vegetables"};
    int sidePrice[5]={0,45,30,50,35};
    QString beverageItem[5] ={" ","Orange Juice", "Soft Drink", "Water", "Coffee"};
    int beveragePrice[5]={0,30,20,10,15};
    QString sauceItem[7]={" ","Ketchup", "Mayonnaise", "Mustard", "Honey Mustard", "Thousand Islands", "BBQ"};
    int saucePrice[7]={0,5,5,5,8,10,7};
    int ind1;
    int ind2;
    int ind3;
    int ind4;
    int ind5;
    int total;
};

#endif // CART_H
