#include "cart.h"
#include "ui_cart.h"

Cart::Cart(int* balance, int Cind,int Bind, int sideind, int sauceind, int bevind, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cart)
{
    ui->setupUi(this);
    balanceRef=balance;
    ind1=Cind;
    ind2=Bind;
    ind3=sideind;
    ind4=sauceind;
    ind5=bevind;
    ui->viewitems->setText(chickenItem[ind1]+":"+ QString::number(chickenPrice[ind1]));
    total=chickenPrice[ind1]+beefPrice[ind2]+sidePrice[ind3]+beveragePrice[ind4]+saucePrice[ind5];
    ui->totalprice->setText(QString::number(total));
    ui->label_balanceVal_cart->setText(QString::number(*balanceRef));
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


void Cart::on_pushButton_clicked()
{
    if(total>*balanceRef) ui->errormessage->setText("Sorry, you can't proceed without recharging your balance");
    else {
        *balanceRef-=total;
        ui->label_balanceVal_cart->setText(QString::number(*balanceRef));
        ui->errormessage->setText("Purchased successfully, enjoy your meal!");
    }
}

