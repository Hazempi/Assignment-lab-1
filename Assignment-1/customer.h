#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QWidget>

namespace Ui {
class customer;
}

class Registration;
class Buy_sell;
class customer : public QWidget
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();

private slots:
    void on_Back2Button_clicked();

private:
    Ui::customer *ui;
    Registration* registrationwindow;
    Buy_sell* buy_sellwindow;

};

#endif // CUSTOMER_H
