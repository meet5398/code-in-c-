// use kof union 
#include<iostream>
#include<string.h>
using namespace std;
union students
{
     char name[34];
    int roll_no;
    int classes;
};



int main()
{
    union students u1;
    strcpy(u1.name,"rahul");
    u1.roll_no=5395;
    cout<<"value is "<<u1.name<<endl;//single value can only be generated from union for ex 
    //both name and roll no can not be generated at a time...

    
    return 0;
}