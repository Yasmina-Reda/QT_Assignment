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

//not working
//to do later
//check and clear
//test size: servers overloaded: try again later
//also maybe have password have unique characters and numebrs?
//test
//message: you have created an account please proceed to checkput to first charge your balance

void signUp::on_pushButton_clicked()
{
    if(ui->lineEdit_userName->text()=="")
    {ui->label_errorMsg->setText("Error: No Username Entered");
     ui->lineEdit_pswd->clear();
     ui->lineEdit_confirmPswd->clear();
    }

    else if(ui->lineEdit_pswd->text()=="")
    {ui->label_errorMsg->setText("Error: No Password Entered");
     ui->lineEdit_confirmPswd->clear();
    }

    else if(ui->lineEdit_confirmPswd->text()!=ui->lineEdit_pswd->text())
    {ui->label_errorMsg->setText("Error: Incorrect Password reentered");
     ui->lineEdit_confirmPswd->clear();
    }

    else if (*size==maxSize)
    {
        //use the pop up error msg thing in video: servers overloaded, please try again later;
        ui->lineEdit_userName->clear();
        ui->lineEdit_pswd->clear();
        ui->lineEdit_confirmPswd->clear();
    }

    else{
        bool exist=false;
        for(int i=*size; i<maxSize&&!exist; i++)
        {
            if(ui->lineEdit_userName->text()==*(userNames+i)) exist=true;
        }

        //this line does not work
        if(exist==true)
        {
            ui->label_errorMsg->setText("Error: Username already exists");
        }

        else
        {
            if(ui->lineEdit_pswd->text().length()<3)
            {
                ui->label_errorMsg->setText("Error: Password cannot be shorter than 3 characters");
            }

            else
            {
                *(userNames+*size)=ui->lineEdit_userName->text();
                *(passwords+*size)=ui->lineEdit_pswd->text();
                *(accounts+*size)=0;
                (*size)++;
                ui->label_errorMsg->setText("Account successfully created");
            }
        }


    }
}



