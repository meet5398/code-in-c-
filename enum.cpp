#include<iostream>
using namespace std;

int main()
{
    enum days{monday,tuesday,wednesday,thursday,frieday,saturday,sunday };
    cout<<thursday+1;
    // or
    days d1; //as it is data you can declare its object
    d1=tuesday;
    cout<<"\n"<<d1;
    return 0;
}