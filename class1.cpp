#include <iostream>
#include <string.h>
using namespace std;
class binary
{
    string a;//by default all this member in class are private which are  not in public
   // void check(void);//function can be made private but it can not be directly accessible

public:

    void value(void);
     void check(void);
    void ones_compliment(void);
    void display(void);
};
void binary::value(void)
{
    cout << "enter the value of binary number" << endl;
    cin >> a;
}
void binary::check(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '0' && a.at(i) != '1')
        {
            cout << "it isn't binary number" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment()
{   check();//nested member function
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '0')
        {
            a.at(i) = '1';
        }
        else
        {
            a.at(i) = '0';
        }
    }
}
void binary::display()
{  cout<<"it's compliment is "<<endl;
    for (int i = 0; i < a.length(); i++)
    {
        cout<< a.at(i);
    }
}
int main()
{
    binary b;
    b.value();
    //b.check();
    b.ones_compliment();
    b.display();
    return 0;
}