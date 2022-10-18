// use of iomanip and setwidth function   : it is used for set width between the length
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
   int a=45;
   int b=345435;
   int c[]={23,34,35,35,43,5,4,5,7,65};
   int d =sizeof(c)/4;
  // cout<<"the value of a is"<<setw(4)<<a<<endl;
  // cout<<"the value of b is"<<setw(4)<<b<<endl;
////    the value without set width
  //  cout<<"the value of a is"<<a<<endl;
  cout<<"the value of b is"<<d<<endl;
   return 0;
}