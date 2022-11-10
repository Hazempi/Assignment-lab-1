#include "registration.h"
#include "ui_registration.h"
#include "buy_sell.h"
#include "seller.h"
#include "customer.h"


Registration::Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
}

void Registration:: setvariable(QString variableclicked){
    v = variableclicked;
}

Registration::~Registration()
{
    delete ui;
}



void Registration::on_loginButton_clicked()
{
    if(v == "s"){
    sellerwindow = new seller();
    sellerwindow->show();
    this->close();
   }
   else
   {
       customerwindow = new customer();
       customerwindow->show();
       this->close();
   }
}

