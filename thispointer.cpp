#include <iostream>
using namespace std;
class number
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
        // this is keyword which is a pointer which points to the object which
        // invokes  the  member function
    }
    void getdata()
    {
        cout << "the value of a is " << a << endl;
    }
};
int main()
{
    number n;
    n.setdata(45);
    n.getdata();
    return 0;
}