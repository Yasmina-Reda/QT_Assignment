#include "signin.h"
#include "ui_signin.h"
#include "order.h"
#include "signup.h"

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
    //a bool fn assumes names not found
    bool found=false; int i;

    //loop over size as long as not found
    for(i=0;i<size && !found;i++)
    {
        //if what's in line edit equals a username, then found
        if(ui->lineEdit_userName->text()==userN[i]) found=true;
    }
    if (!found) {ui->label_Warning->setText("Error! Username Does Not Exist. Try signing up instead" ); ui->lineEdit_userName->clear(); ui->lineEdit_pswd->clear();/*in case a password was entered*/}
    else{
        //using same bool for password
        found=false;
        for(i=0;i<size && !found;i++)
        {
            if(ui->lineEdit_pswd->text()==Pswds[i]) found=true;
        }
        if(!found){ui->label_Warning->setText("Error! Incorrect Password For Username"); ui->lineEdit_pswd->clear();} //only delete pswd
        else{
           ui->label_Warning->setText("Sign in Successful. Redirecting to Order Window");
           //display balance
           ui->label_balanceVal->setText(QString::number(AccBalance[i-1])+"\t"+"L.E.");
           //senf balance as parameter to next window
           Order orderWindow(AccBalance[i-1]);
           orderWindow.setModal(true);
           orderWindow.exec();
           //after the window is exited, sign out and reset fields
           ui->lineEdit_userName->clear(); ui->lineEdit_pswd->clear();ui->label_balanceVal->clear();
           ui->label_Warning->setText("You have been Signed Out");
        }
    }
}



void SignIn::on_pushButton_signUp_clicked()
{
    //opens a new window that has all userdata (to be able to add to them)
    signUp signUpWindow(userN,Pswds,AccBalance, size, maxSize);
    signUpWindow.setModal(true);
    signUpWindow.exec();
}

