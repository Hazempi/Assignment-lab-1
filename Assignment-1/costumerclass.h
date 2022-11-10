#ifndef COSTUMERCLASS_H
#define COSTUMERCLASS_H


class costumerClass
{
private:
    string name, adress,email, phonenumber;
    string* arr;
public:
    costumerClass();
    customer()
       {
           name="";
           address="";
           email="";
           phonenumber="";
       }
       void construct(string proname,string proemail, string caddress, string number)
       {
           name=proname;
           email=proemail;
           address=caddress;
           phonenumber=number;
       }
       void setname(string proname)
       {
           name=proname;
       }
       void setemail(string proemail)
       {
           email=proemail;
       }
       void setaddress(string caddress)
       {
           address=caddress;
       }
       void setnumber(string number)
       {
           phonenumber=number;
       }
       string getname()
       {
           return name;
       }
       string getemail()
       {
           return email;
       }
       string getaddress()
       {
           return address;
       }
       string getnumber()
       {
           return phonenumber;
       }
       void cregister()
       {

       }
       void searchname()
       {

       }
       void searchcategory()
       {

       }
       void addtocart()
       {
           public void decreaseQuantity(int amount)
               {
                   int decreasedQuantity = quantity - amount;
                   if(decreasedQuantity < 0 )
                       throw new RuntimeException(String.format("The amount you entered is greater than the available quantity", amount, quantity));
                   quantity = decreasedQuantity;
               }
           }
       }
       void confirmbuyandreceipt()
       {
            price = 𝒑𝒓𝒐𝒅𝒖𝒄𝒕 𝒑𝒓𝒊𝒄𝒆 ∗ 𝒒𝒖𝒂𝒏𝒕𝒊𝒕𝒚;
       }
};

#endif // COSTUMERCLASS_H
