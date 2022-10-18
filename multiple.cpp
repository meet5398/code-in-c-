#include<iostream>
using namespace std;
class base1
{
  protected:
  int num1;
  public:
  void setdata(int a)
  {
     num1=a;
  }
  void getdata()
  {
      cout<<"number 1 is "<<num1<<endl;
  }
};
class base2
{
  protected:
  int num2;
  public:
  void setvalue(int b)
  {
     num2=b;
  }
  void getvalue()
  {
      cout<<"number 2 is "<<num2<<endl;
  }
};
class derived:public base1, public base2
{
   public:
   void show()
   {
       getdata();
       getvalue();
       cout<<"summation of base1 and base2 is "<<num2+num1<<endl;
   }
};
int main()
{
    derived d1;
    d1.setdata(34);
    d1.setvalue(41);
    d1.show();

    return 0;
}