#include "buy_sell.h"
#include "ui_buy_sell.h"
#include "registration.h"
#include "seller.h"
#include "customer.h"

Buy_sell::Buy_sell(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Buy_sell)
{
    ui->setupUi(this);
}

Buy_sell::~Buy_sell()
{
    delete ui;
}


void Buy_sell::on_sellerButton_clicked()
{
    variableclicked = "s";
    registrationwindow = new Registration();
    registrationwindow->show();
    this->close();
}


void Buy_sell::on_customeButton_clicked()
{
    variableclicked = "c";
    registrationwindow = new Registration();
    registrationwindow->show();
    this->close();
}

