#include "cart.h"
#include "ui_cart.h"

Cart::Cart(int* balance, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cart)
{
    ui->setupUi(this);
    balanceRef=balance;
}

Cart::~Cart()
{
    delete ui;
}

void Cart::on_pushButton_Recharge_clicked()
{
    if(ui->lineEdit_Recharge->text()=="") ui->lineEdit_Recharge->setText("Please Enter Amount to be Recharged");
    else if((ui->lineEdit_Recharge->text()).toInt()<=0)ui->lineEdit_Recharge->setText("Please Enter a Positive Value to be Recharged");
    else {
        *(balanceRef)+=(ui->lineEdit_Recharge->text()).toInt();
        ui->label_balanceVal_cart->setText(QString::number(*balanceRef));
        ui->lineEdit_Recharge->clear();
    }
}

