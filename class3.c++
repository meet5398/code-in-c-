// static data member 
#include<iostream>
using namespace std;
class employee
{
    int id;
   static int count;
    public:
    void setdata();
    void display();

};
void employee:: setdata()
{
    cout<<"enter the id of the employee"<<endl;
    cin>>id; 
    count++;
}
void employee::display()
{
    cout<<"the id of the employee is  "<<id<<"  the number of employee is  "<<count<<endl;
}
int employee::count;//if you want to start from 1000 then you can make count=1000 here...
int main()
{
    employee meet,rohan,ronak;
    meet.setdata();
    meet.display();
    rohan.setdata();
    rohan.display();
    ronak.setdata();
    ronak.display();


    return 0;
}