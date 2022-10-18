// array of object
#include<iostream>
using namespace std;
class employee
{
  int id;  
  static int count;
  public:
  void setdata()
  {
      cout<<"enter the id of employee"<<endl;
      cin>>id;
      count++;
  }
  void display()
  {
      cout<<"the id of employee "<<count<<" is "<<id<<endl;
  }
};

int employee ::count=100;
int main()
{ 
    employee fb[10];
    for (int i = 0; i <5; i++)
    {
       fb->setdata();
       fb->display();
    }
    
    
    return 0;
}