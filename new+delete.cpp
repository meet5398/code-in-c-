#include<iostream>
using namespace std;

int main()
{
    int a=45;
    int *ptr=&a;
   // *ptr=567;  this will changes the value of ptr
    cout<<"the value of ptr is "<<*ptr<<endl;
    // dynamically created 
   // int *p = new int (40);
    float *p = new float (40.4545);
    cout<<"the value at address p is "<<*p<<endl;
    int *arr =  new  int[3];//continuous allocation
    arr[0]=45;
    arr[1]=67;
    arr[2]=76;
    //delete[] arr;||if we called delete here before printing the value of array then it memory will
    //be  cleared before it print the value and it will provide garbage value
    cout<<"the value of arr[0] is"<<arr[0]<<endl;
    cout<<"the value of arr[1] is"<<arr[1]<<endl;
    cout<<"the value of arr[2] is"<<arr[2]<<endl;

    //above and below give you same result

    cout<<"\nthe value of arr[0] is"<<*arr<<endl;
    cout<<"the value of arr[1] is"<<*(arr+1)<<endl;
    cout<<"the value of arr[2] is"<<*(arr+2)<<endl;
    delete[] arr;//it is for deleting the space occupied by the arr
    
    return 0;
}