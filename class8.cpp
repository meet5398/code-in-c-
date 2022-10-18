// friend function example 2
#include<iostream>
using namespace std;
class y;
class x
{
    int data;
    public:
    void setvalue(int value)
    {
        data=value;
    
    }
    friend  void add(x ,y );
};
class y
{
    int data;
    public:
    void setvalue(int value)
    {
        data=value;
    }
    friend void  add(x ,y);

};
void add(x x1, y y1)
{
    cout<<"summing of object of x and y is "<<x1.data+y1.data<<endl;
}

int main()
{  x x1;
   y y1;
    x1.setvalue(5);
    y1.setvalue(12);
    add(x1,y1);
    return 0;
}