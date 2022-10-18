#include<iostream>
using namespace std;
template<class t>
void swaap(t &a,t &b){
    t swaap;
    swaap=a;
    a=b;
    b=swaap;
}
template<class t1,class t2>
float average(t1 x,t2 y){
    float ave=(x+y)/2;
    return ave;
}


int main()
{
    float x=56.3,y=12.4,b;
     swaap(x,y);
     cout<<"the value of x after swapping is  "<<x<<"  and  y is  "<<y;
     b=average(44.2,56);
     cout<<"\nthe average is "<<b<<endl;
    return 0;
}