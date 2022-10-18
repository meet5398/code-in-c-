#include<iostream>
using namespace std;

int main()
{
    int a=23;
    int *b=&a;
    // pointer :store the address of another data type
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of a is"<<*b<<endl;
    // pointer to pointer
    int **c=&b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;    
    cout<<"the value  in b is"<<*c<<endl;    
    cout<<"the value in  b is"<<b<<endl;    
    cout<<"the value in address of (address of b) is"<<**c<<endl;    
    
    // pointer and array
    
        return 0;
}