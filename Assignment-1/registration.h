#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>

namespace Ui {
class Registration;
}

class Buy_sell;
class seller;
class customer;
class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();
    void setvariable(QString variablecicked);

private slots:
    void on_loginButton_clicked();

private:
    Ui::Registration *ui;
    QString name;
    QString email;
    QString address;
    QString phone;
    QString v;
    Buy_sell* buy_sellwindow;
    seller* sellerwindow;
    customer* customerwindow;
};

#endif // REGISTRATION_H
