#ifndef ORDER_H
#define ORDER_H

#include <QDialog>

namespace Ui {
class Order;
}

class Order : public QDialog
{
    Q_OBJECT

public:
    explicit Order(int,QWidget *parent = nullptr);
    ~Order();

private:
    Ui::Order *ui;
    QString chickenItem[8]={"Fried Chicken-1 piece", "Fried Chicken-2 pieces", "Fried Chicken-7 pieces", "Fried Chicken-10 pieces", "Chicken Sandwich-Small", "Chicken Sandwich-Medium", "Chicken Sandwich-Large", "Grilled Chicken"};
    int chickenPrice[8]={20,35,120,175,40,65,80,120};
    QString beefItem[7] ={"Steak-1 piece", "Steak-2 pieces", "Steak-3 pieces", "Beef Burger-Small", "Beef Burger-Medium", "Beef Burger-Large", "Burger Steak"};
    int beefPrice[7]={80,150,220,60,85,100,140};
    QString sideItem[4]={"Rice", "Fries", "Pasta", "Vegetables"};
    int sidePrice[4]={45,30,50,35};
    QString beverageItem[4] ={"Orange Juice", "Soft Drink", "Water", "Coffee"};
    int beveragePrice[4]={30,20,10,15};
    QString sauceItem[6]={"Ketchup", "Mayonnaise", "Mustard", "Honey Mustard", "Thousand Islands", "BBQ"};
    int saucePrice[6]={5,5,5,8,10,7};
};

#endif // ORDER_H
