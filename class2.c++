//memory allocation and concept of array in c++
#include<iostream>
using namespace std;
class shop
{
   int itemid[100];
   int item_price[100];
   int counter;
   public:
   void inicounter(void);
   void setprice(void);
   void display(void);
};
void shop::inicounter(void)
{
    counter=0;
}
void shop ::setprice(void)
{
    cout<<"enter the id of item "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of item"<<counter+1<<endl;
    cin>>item_price[counter];
    counter++;
}
void shop::display(void)
{ 
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of  item id     "<<itemid[i]<<"  is   "<<item_price[i]<<endl;
}
    }
    
    
int main()
{
    shop raj;
    raj.inicounter();
    raj.setprice();
    raj.setprice();
    raj.setprice();
    raj.display();
    
    return 0;
}