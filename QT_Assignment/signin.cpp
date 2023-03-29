#include "signin.h"
#include "ui_signin.h"
#include "order.h"

SignIn::SignIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}



void SignIn::on_pushButton_signin_clicked()
{
    bool found=false; int i;
    for(i=0;i<size && !found;i++)
    {
        if(ui->lineEdit_userName->text()==userN[i]) found=true;
    }
    if (!found) {ui->label_Warning->setText("Error! Username Does Not Exist"); ui->lineEdit_userName->clear(); ui->lineEdit_pswd->clear();/*in case a password was entered*/}
    else{
        found=false;
        for(i=0;i<size && !found;i++)
        {
            if(ui->lineEdit_pswd->text()==Pswds[i]) found=true;
        }
        if(!found){ui->label_Warning->setText("Error! Incorrect Password For Username"); ui->lineEdit_pswd->clear();}
        else{
           ui->label_Warning->setText("Sign in Successful. Redirecting to Order Window");
           ui->label_balanceVal->setText(QString::number(AccBalance[i-1]));
           Order orderWindow(AccBalance[i-1]);
           orderWindow.setModal(true);
           orderWindow.exec();
           ui->label_balanceVal->setText(QString::number(AccBalance[i-1]));
           ui->lineEdit_userName->clear(); ui->lineEdit_pswd->clear();ui->label_balanceVal->clear();
           ui->label_Warning->setText("You have been Signed Out");
        }
    }
}


