#include "buy_sell.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Buy_sell w;
    w.show();
    return a.exec();
}
