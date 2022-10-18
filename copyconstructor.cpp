#include<iostream>
using namespace std;
class number
{
    int a;
    public:
   // number(){
   //     a=0;
   // }
    number(int num)  //when no copy constructor is found then compiler supply its own copy constructor
    {
        a=num;
    }
    void display()
    {
        cout<<"the number of this object is"<<a<<endl;
    }
};
int main()
{
    number x(45),z(34);
    z.display();
    x.display();
    number z1(z);
    z1.display();
    number z2(x);
    z2.display();
    return 0;
}