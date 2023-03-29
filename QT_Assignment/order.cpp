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

    Cart opencart(balanceRef);
    opencart.setModal(true);
    opencart.exec();
    ui->label_balanceVal_order->setText(QString::number(*balanceRef));
}

