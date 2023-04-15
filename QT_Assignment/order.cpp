#include "order.h"
#include "ui_order.h"
#include "cart.h"

Order::Order(int &balance,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Order)
{
    ui->setupUi(this);
    balanceRef=&balance;
    ui->label_balanceVal_order->setText(QString::number(*balanceRef));
    //default num of items
    ui->label_showNumItems->setText("0");
}

Order::~Order()
{
    delete ui;
}

void Order::on_pushButton_addCart_clicked()
{
    if(numberofitems<20){
    if(ui->chicken->currentIndex()==0 && ui->sideoptions->currentIndex()==0 && ui->beverages->currentIndex()==0 && ui->meat->currentIndex()==0 && ui->sauces->currentIndex()==0)
        {
            ui->showstatus->setText("No items are selected");
        }

   else{
        ui->showstatus->clear();
        if(ui->chicken->currentIndex()!=0){

        purchasedItems[numberofitems]=chickenItem[ui->chicken->currentIndex()];
        purchasedPrices[numberofitems]=chickenPrice[ui->chicken->currentIndex()];
        //ui->label_test->setText(QString::number(purchasedPrices[numberofitems]));
        numberofitems++;
        ui->chicken->setCurrentText(0);
    }
    if(ui->sideoptions->currentIndex()!=0){

        purchasedItems[numberofitems]=sideItem[ui->sideoptions->currentIndex()];
        purchasedPrices[numberofitems]=sidePrice[ui->sideoptions->currentIndex()];
        numberofitems++;
        ui->sideoptions->setCurrentText(0);
    }
    if(ui->beverages->currentIndex()!=0) {

        purchasedItems[numberofitems]=beverageItem[ui->beverages->currentIndex()];
        purchasedPrices[numberofitems]=beveragePrice[ui->beverages->currentIndex()];
        numberofitems++;
        ui->beverages->setCurrentText(0);
    }

    if(ui->meat->currentIndex()!=0) {

        purchasedItems[numberofitems]=beefItem[ui->meat->currentIndex()];
        purchasedPrices[numberofitems]=beefPrice[ui->meat->currentIndex()];
        numberofitems++;
        ui->meat->setCurrentText(0);
    }
    if(ui->sauces->currentIndex()!=0) {

        purchasedItems[numberofitems]=sauceItem[ui->sauces->currentIndex()];
        purchasedPrices[numberofitems]=saucePrice[ui->sauces->currentIndex()];
        numberofitems++;
        ui->sauces->setCurrentText(0);
    }
    ui->label_showNumItems->setText(QString::number(numberofitems));
    //if numitems=0 display error message
    }}
    else ui->showstatus->setText("You have exceeded the maximum number of items. Please proceed to checkout first");
    //pI=purchasedItems; pP=purchasedPrices;
}

void Order::on_pushButton_viewCart_clicked()
{

    Cart opencart(balanceRef,purchasedItems,purchasedPrices, numberofitems);
    opencart.setModal(true);
    opencart.exec();
    ui->label_balanceVal_order->setText(QString::number(*balanceRef));
    //numberofitems=0;
    //ui->label_numItems->setText(QString::number(numberofitems));

}


void Order::on_chicken_activated(int index)
{
    ui->label_showPrice->setText(QString::number(chickenPrice[index]));
}


void Order::on_meat_activated(int index)
{
    ui->label_showPrice->setText(QString::number(beefPrice[index]));
}


void Order::on_sideoptions_activated(int index)
{
    ui->label_showPrice->setText(QString::number(sidePrice[index]));
}


void Order::on_beverages_activated(int index)
{
    ui->label_showPrice->setText(QString::number(beveragePrice[index]));
}


void Order::on_sauces_activated(int index)
{
    ui->label_showPrice->setText(QString::number(saucePrice[index]));
}

