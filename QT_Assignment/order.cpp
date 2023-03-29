#include "order.h"
#include "ui_order.h"

Order::Order(int balance,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Order)
{
    ui->setupUi(this);
    ui->label_balanceVal_order->setText(QString::number(balance));
    ui->label_showNumItems->setText("0");
}

Order::~Order()
{
    delete ui;
}
