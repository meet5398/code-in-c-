#include<iostream>
using namespace std;
float interest(int money,float rate=1.04)
{
    return money*rate;
}

int main()
{
    int money=100000;
    cout<<"if you have "<<money<<"in your account you will receive"<<interest(money)<<"after a year"<<endl;
    cout<<"if you are vip and you  have paid "<<money<<"in your account you will receive"<<interest(money,1.10)<<"after a year"<<endl;
    return 0;
}