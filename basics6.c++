#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cout<<"which table you want to print\n";
    cin>>a;
    int i=1;
    while (i<=10)
    {
       cout<<a<<setw(5)<<"*"<<setw(5)<<i<<setw(5)<<"="<<a*i<<endl;
       i++;
    }
  return 0;
  
}