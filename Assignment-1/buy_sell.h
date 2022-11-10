#ifndef BUY_SELL_H
#define BUY_SELL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Buy_sell; }
QT_END_NAMESPACE

class Registration;
class seller;
class customer;
class Buy_sell : public QMainWindow
{
    Q_OBJECT

public:
    Buy_sell(QWidget *parent = nullptr);
    ~Buy_sell();

private slots:
    void on_sellerButton_clicked();

    void on_customeButton_clicked();

private:
    Ui::Buy_sell *ui;
    QString variableclicked;
    Registration* registrationwindow;
    seller* sellerwindow;

};
#endif // BUY_SELL_H
