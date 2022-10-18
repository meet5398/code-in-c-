#include <iostream>
using namespace std;
class base1
{
public:
    void set()
    {
        cout << "hello world";
    }
};
class base2
{
public:
    void set()
    {
        cout << "hello meet" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:                //*************how to solve ambiguity error***************
    void set()         //  when two or more class has same function name and you called it using derived clas
    {                   //  then compiler confuse that which function is called so for that we have resolve 
        base2::set();   //   ambiguity as beside given...   
    }                           
};                                  
int main()
{
    derived d;
    d.set();
    return 0;
}