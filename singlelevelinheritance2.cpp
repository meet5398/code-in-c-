//single level inheritance with private visibility mode
#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 20;
    data2 = 45;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class derived : private base
{
    int data3;

public:
    int process();
    void display();
};
int derived::process()
{
    setdata();
    data3 = data2 * getdata1();
    return data3;
}
void derived::display()
{

    cout << "value of data1 is " << getdata1() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl;
}

int main()
{
    derived d;
    //d.setdata();||: we can not call it through derived class object it is private for derived class
    d.process(); //||: we can call it inside display() because it is public
    d.display();
    return 0;
}