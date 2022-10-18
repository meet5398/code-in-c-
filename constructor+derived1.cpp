#include<iostream>
using namespace std;
/*
   case1:
   class b:public a{
       // order of execution of constructor |> a(),b()
   }
   case2:
   class a:public class b,public class c
   {
       // order of execution of constructor|>b(),c(),a()
   }
   case3:
   class a: public class b,virtual public class c
   {
       //order of execution of constructor||c(),b(),a()
       virtual class constrsuctor always executed first
   }
*/
class base1
{
  int data1;
  public:
  base1(int a)
  {
      data1=a;
      cout<<"constructor of base1  is called"<<endl;
  }
   void displaydata1()
   {
       cout<<"the value of the data1 is"<<data1<<endl;
   }
};
class base2
{
  int data2;
  public:
  base2(int a)
  {
      data2=a;
      cout<<"constructor of base2  is called"<<endl;
  }
  void displaydata2()
   {
       cout<<"the value of the data2 is"<<data2<<endl;
   }
};
class derived:public base1,public base2
{
     int d1, d2;
     public:
     derived(int a,int b,int c,int d):base1(a),base2(b){
      d1=c;
      d2=d;
      cout<<"derived constructor is called"<<endl;
     }
     void displayderived()
         {
             cout<<"the value of d1 and d2 is  "<<d1<<"  and  "<<d2<<endl;
         }
     
    
};
int main()
{   
    derived d(30,40,50,60);
   d.displaydata1();
   d.displaydata2();
   d.displayderived();
    
    return 0;
}
