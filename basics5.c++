#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout<<"1 for addittion \n 2 for subtraction \n 3 for multiplication\n 4 for division"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    cout<<"enter a number "<<endl;
    cin>>a;
    cout<<"enter a number"<<endl;
    cin>>b;
    switch (choice)
    {
    case 1:
        cout<<"addition is"<<a+b<<endl;
        break;
    case 2:
         cout<<"subtraction is"<<a-b<<endl;
         break;
    case 3:
         cout<<"multiplication is"<<a*b<<endl;
         break;
    case 4:
        cout<<"division is"<<a/b<<endl;
        break;
    default:
        cout<<"dont be oursmart!!!"<<endl;
        break;
    }
    return 0;
}