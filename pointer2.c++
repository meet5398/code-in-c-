#include<iostream>
using namespace std;

int main()
{
    int marks[]={32,23,454,565,23};
    cout<<"the marks of a[0] is "<<marks[0]<<endl;
    cout<<"the marks of a[1] is "<<marks[1]<<endl;
    cout<<"the marks of a[2] is "<<marks[2]<<endl;
    cout<<"the marks of a[3] is "<<marks[3]<<endl;
    cout<<"the marks of a[4] is "<<marks[4]<<endl;
   int *p=marks;
     cout<<"\n\nthe marks of a[0] is "<< *(p+0) <<endl;
    cout<<"the marks of a[1] is "<<*(p+1)<<endl;
    cout<<"the marks of a[2] is "<<*(p+2)<<endl;
    cout<<"the marks of a[3] is "<<*(p+3)<<endl;
    cout<<"the marks of a[4] is "<<*(p+4)<<endl;

    return 0;
}