#include "seller.h"
#include "ui_seller.h"
#include "registration.h"
#include "buy_sell.h"
#include "registration.h"
#include "buy_sell.h"
#include "sellerclass.h"


seller::seller(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seller)
{
    ui->setupUi(this);
}

seller::~seller()
{
    delete ui;
}



void seller::on_addproductBox_clicked()
{

}


void seller::on_back1_clicked()
{
    buy_sellwindow = new Buy_sell();
    buy_sellwindow->show();
    this->close();
}

