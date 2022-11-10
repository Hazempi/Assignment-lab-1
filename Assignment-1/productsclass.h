#ifndef PRODUCTSCLASS_H
#define PRODUCTSCLASS_H


class ProductsClass
{
private:
    string name, category;
    float price;
    int quantity;
public:
    ProductsClass();
    product()
       {
           name="";
           category="";
           price=0;
           quantity=0;
       }
       void construct(string proname,string procategory, float proprice, int proquantity)
       {
           name=proname;
           category=procategory;
           price=proprice;
           quantity=proquantity;
       }
       void setname(string proname)
       {
           name=proname;
       }
       void setcategory(string procategory)
       {
           category=procategory;
       }
       void setprice(float proprice)
       {
           price=proprice;
       }
       void setquantity(int proquantity)
       {
           quantity=proquantity;
       }
       string getname()
       {
           return name;
       }
       string getcategory()
       {
           return category;
       }
       float getprice()
       {
           return price;
       }
       int getquantity()
       {
           return quantity;
       }
};

#endif // PRODUCTSCLASS_H
