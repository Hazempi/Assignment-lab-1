#include "customer.h"
#include "ui_customer.h"
#include "registration.h"
#include "buy_sell.h"

customer::customer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::customer)
{
    ui->setupUi(this);
}

customer::~customer()
{
    delete ui;
}

void customer::on_Back2Button_clicked()
{
    buy_sellwindow = new Buy_sell();
    buy_sellwindow->show();
    this->close();
}

