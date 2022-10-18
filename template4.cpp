// class template with default parameter
#include<iostream>
using namespace std;
template<class t1=int,class t2 = double>
class ronak
{
    public:
    t1 a;
    t2 b;
    ronak(t1 x,t2 y){
     a=x;
     b=y;
    }
    void display()
    {
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is"<<b<<endl;
        cout<<endl;
    }
};
int main()
{
    ronak<> r(34,34.56);//with default parameter
    r.display();
    ronak <char,int> r2('m',45);
    r2.display();
    return 0;
}