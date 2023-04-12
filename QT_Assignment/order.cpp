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
    ui->label_showNumItems->setText("0");
}

Order::~Order()
{
    delete ui;
}

void Order::on_pushButton_viewCart_clicked()
{

    Cart opencart(balanceRef, ind1, ind2, ind3, ind4, ind5);
    opencart.setModal(true);
    opencart.exec();
    ui->label_balanceVal_order->setText(QString::number(*balanceRef));

}


void Order::on_pushButton_addCart_clicked()
{
    if(ui->chicken->currentIndex()!=0) numberofitems++;
    if(ui->sideoptions->currentIndex()!=0) numberofitems++;
    if(ui->beverages->currentIndex()!=0) numberofitems++;
    if(ui->meat->currentIndex()!=0) numberofitems++;
    if(ui->sauces->currentIndex()!=0) numberofitems++;
    ui->label_showNumItems->setText(QString::number(numberofitems));
    if(numberofitems==0)
    {
        ui->showstatus->setText("No items are selected");
    }
    ind1=ui->chicken->currentIndex();
    ind2=ui->meat->currentIndex();
    ind3=ui->sideoptions->currentIndex();
    ind4=ui->sauces->currentIndex();
    ind5=ui->beverages->currentIndex();
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

