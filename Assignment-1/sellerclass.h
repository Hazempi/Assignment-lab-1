#ifndef SELLERCLASS_H
#define SELLERCLASS_H


class SellerClass
{
private:
    string name, email;
public:
    SellerClass();
    seller()
        {
            name="";
            category="";
        }
        void construct(string proname,string proemail)
        {
            name=proname;
            email=proemail;
        }
        void setname(string proname)
        {
            name=proname;
        }
        void setemail(string proemail)
        {
            email=proemail;
        }

        string getname()
        {
            return name;
        }
        string getcategory()
        {
            return email;
        }
        void userregister()
        {

        }
        void addproducts()
        {

        }
};

#endif // SELLERCLASS_H
