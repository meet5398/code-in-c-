#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int x, int y); //constructor declaration
    void display()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y) //this is  parameterised constructor where paramerer is pased
{
    a = x;
    b = y;
    cout << "hello world" << endl;
}
int main()
{
    // implicit declaration
    complex c(4, 2);
    c.display();
    // explicit declaration
    complex a = complex(4, 3);
    a.display();
    return 0;
}