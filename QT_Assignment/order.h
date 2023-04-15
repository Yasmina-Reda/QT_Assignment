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
    explicit Order(int&, QWidget *parent = nullptr);
    ~Order();

private slots:
    void on_pushButton_viewCart_clicked();

    void on_pushButton_addCart_clicked();

    void on_chicken_activated(int index);

    void on_meat_activated(int index);

    void on_sideoptions_activated(int index);

    void on_beverages_activated(int index);

    void on_sauces_activated(int index);

private:
    Ui::Order *ui;
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
    QString purchasedItems[20];
    //QString** pI;
    int purchasedPrices[20];
    //int** pP;
   // bool cartfull=false;
    int numberofitems=0;

};

#endif // ORDER_H
