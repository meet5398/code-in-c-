//1.constructor
///2.is special member function with the same name as class
//3.it should be declared in public section of the class
//4.they can not return values and they donot have return type
//5. it is automaticaly invoked when object is created
//6.it can have default argument
//7.we can not refer to their address
//8.it is used to initialised object of it's class

#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(); //constructor declaration
    void display()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex::complex() //this is default constructor as it takes no  parameter
{
    a = 12;
    b = 34;
    cout << "hello world" << endl;
}
int main()
{
    complex c;
    c.display();
    return 0;
}