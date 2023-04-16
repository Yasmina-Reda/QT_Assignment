#include "cart.h"
#include "ui_cart.h"

Cart::Cart(int* balance, QString* itemsarray, int* pricesarray,int& size, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cart)
{
    ui->setupUi(this);
    balanceRef=balance;
    Iarray=itemsarray;
    Parray=pricesarray;
    numItems=&size;


    for (int i=0; i<*numItems; i++){
        total+=*(Parray+i);
        ui->viewitems->setText(ui->viewitems->text()+*(Iarray+i)+":"+"\t"+QString::number(*(Parray+i))+" L.E.\n");
    }
    ui->totalprice->setText(QString::number(total));
    ui->label_balanceVal_cart->setText(QString::number(*balanceRef));
}

Cart::~Cart()
{
    delete ui;
}

void Cart::on_pushButton_Recharge_clicked()
{
    if(ui->lineEdit_Recharge->text()=="") ui->errormessage->setText("Please Enter Amount to be Recharged");
    else if((ui->lineEdit_Recharge->text()).toInt()<=0)
    {ui->errormessage->setText("Please Enter a Positive Value to be Recharged");
        ui->lineEdit_Recharge->setText("");
    }
    else {
        //change balance in array
        *(balanceRef)+=(ui->lineEdit_Recharge->text()).toInt();
        //update the displayed balance
        ui->label_balanceVal_cart->setText(QString::number(*balanceRef));
        //clear the field
        ui->lineEdit_Recharge->clear();
    }
}


void Cart::on_pushButton_clicked()
{
    if(buyCount!=0) ui->errormessage->setText("Already purchased items in cart");
    else if(total>*balanceRef) ui->errormessage->setText("Sorry, you can't proceed without recharging your balance");
    else {
        *balanceRef-=total;
        ui->label_balanceVal_cart->setText(QString::number(*balanceRef));
        ui->errormessage->setText("Purchased successfully, enjoy your meal! :)");
        *numItems=0;
        buyCount++;
    }
}
