#include "signup.h"
#include "ui_signup.h"

signUp::signUp(QString userN[], QString Pswds[], int AccBalance[] ,int& size,int maxSize, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUp)
{
    ui->setupUi(this);
    userNames=userN;
    passwords=Pswds;
    accounts=AccBalance;
    this->size=&size;
    this->maxSize=maxSize;

}

signUp::~signUp()
{
    delete ui;
}


void signUp::on_pushButton_clicked()
{
    //if no username entered
    if(ui->lineEdit_userName->text()=="")
    {ui->label_errorMsg->setText("Error: No Username Entered");
     ui->lineEdit_pswd->clear();
     ui->lineEdit_confirmPswd->clear();
    }

    //if no pswd
    else if(ui->lineEdit_pswd->text()=="")
    {ui->label_errorMsg->setText("Error: No Password Entered");
     ui->lineEdit_confirmPswd->clear();
    }

    //if confirm pswd does not match pswd
    else if(ui->lineEdit_confirmPswd->text()!=ui->lineEdit_pswd->text())
    {ui->label_errorMsg->setText("Error: Incorrect Password reentered");
     ui->lineEdit_confirmPswd->clear();
    }

    //if reached maxsize
    else if (*size==maxSize)
    {
        ui->label_errorMsg->setText("Servers overloaded, please try again later.");

    }

    else{
        //tests if username is duplicated
        exist=false;
        //loop over array as long as not duplicated
        for(int i=0; i<maxSize&&!exist; i++)
        {
            if(ui->lineEdit_userName->text()==*(userNames+i)) exist=true;
        }

        if(exist==true)
        {
            ui->label_errorMsg->setText("Error: Username already exists");
        }

        else
        {
            //pswd must be at least 3 characters
            if(ui->lineEdit_pswd->text().length()<3)
            {
                ui->label_errorMsg->setText("Error: Password cannot be shorter than 3 characters");
            }

            else
            {
                //update arrays and increase the size
                *(userNames+*size)=ui->lineEdit_userName->text();
                *(passwords+*size)=ui->lineEdit_pswd->text();
                *(accounts+*size)=0;
                (*size)++;
                ui->label_errorMsg->setText("Account successfully created. Proceed to checkout to charge your balance");
            }
        }


    }
}


