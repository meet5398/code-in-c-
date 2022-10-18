#include<iostream>
using namespace std;
class student
{
private:
    int a,b,c;

public:
   int d,e;
   void setdata(int a1,int b1,int c1);
   void getdata()
   {
     cout<<"the value of a is "<<a<<endl;
     cout<<"the value of b is "<<b<<endl;
     cout<<"the value of c is "<<c<<endl;
     cout<<"the value of d is "<<d<<endl;
     cout<<"the value of e is "<<e<<endl;
   }
};
void student::  setdata(int a1,int b1,int c1)
{
   a=a1;
   b=b1;
   c=c1;
}
int main()
{
    student meet;
    meet.d=45;
    meet.e=67;
    // meet.a=34;--->>this can not be executed because a is in  private 
    meet.setdata(34,2,5);
    meet.getdata();
    return 0;
}