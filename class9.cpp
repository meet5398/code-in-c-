//friend function example---03
#include <iostream>
using namespace std;
class b;
class a

{
    int value1;
    friend void swap(a &, b &);

public:
    void setvalue(int a)
    {
        value1 = a;
    }
    void display()
    {
        cout << "value of class a is " << value1 << endl;
    }
};
class b
{
    friend void swap(a &, b &);
    int value2;

public:
    void setvalue(int a)
    {
        value2 = a;
    }
    void display()
    {
        cout << "value of class a is " << value2 << endl;
    }
};
void swap(a &x, b &y)
{
    int temp;
    temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main()
{
    a a1;
    b b1;
    a1.setvalue(23);
    a1.display();
    b1.setvalue(45);
    b1.display();
    swap(a1, b1);
    cout << "the value after swaping is::" << endl;
    a1.display();
    b1.display();

    return 0;
}