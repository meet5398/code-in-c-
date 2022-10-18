// object as function argument
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int a1, int b1);
    void sum(complex c1, complex c2);
    void displayI();
};
void complex::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
}
void complex::sum(complex c1, complex c2)
{
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}
void complex::displayI()
{
    cout << "your complex number is " << a << " + " << b << " i " << endl;
}
int main()
{
    complex c1, p2, p3;
    c1.setdata(2, 4);
    c1.displayI();
    p2.setdata(3, 6);
    p2.displayI();
    p3.sum(c1, p2);
    p3.displayI();

    return 0;
}