#include<iostream>
using namespace std;
 void swap(int *a,int *b)
 {  
    int  temp=*a;
     *a=*b;
     *b=temp;
 }
 int main()
 {
     int a=45,b=43;
     cout<<"the value of a is"<<a<<"the value of b is "<<b<<endl;
     swap(&a,&b);
     cout<<"the value of a is"<<a<<"the value of b is "<<b<<endl;
     return 0;
 }
  //or
 //using reference variable (it also give same result) as used below
// void swap(int &a,int &b)
// {  
//    int  temp=a;
//     a=b;
//     b=temp;
// }

// int main()
// {
//     int a=45,b=43;
//     cout<<"the value of a is"<<a<<"the value of b is "<<b<<endl;

//     cout<<"the value of a is"<<a<<"the value of b is "<<b<<endl;

//     return 0;
// }
