#include<iostream>
using namespace std;
 
//int sum(int a, b);//it is not acceptable
// int sum(a,int b);//it is also not acceptable
 //int sum(int,int );//it is also  acceptable
 int sum(int a,int b);//function declaration
void g(void);

int main()
{
     int num1,num2;
     cout<<"enter the first number"<<endl;
     cin>>num1;
     cout<<"enter the second number"<<endl;
     cin>>num2;
     cout<<"the sum of two number is "<<sum(num1,num2);
     g();
  //num1 and num2 are actual parameter
    return 0;
}
int sum(int a,int b)
{
    int c=a+b;// here a and b are formal parameter it takes value from actual parameter 
    return c;
}
void g()
{
    cout<<"\n\nmy name is meetsinh mori"<<endl;
}