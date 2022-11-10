#ifndef SELLER_H
#define SELLER_H

#include <QWidget>

namespace Ui {
class seller;
}

class Registration;
class Buy_sell;
class seller : public QWidget
{
    Q_OBJECT

public:
    explicit seller(QWidget *parent = nullptr);
    ~seller();


private slots:
    void on_addproductBox_clicked();

    void on_back1_clicked();

private:
    Ui::seller *ui;
    Registration* registrationwindow;
    Buy_sell* buy_sellwindow;

};

#endif // SELLER_H
