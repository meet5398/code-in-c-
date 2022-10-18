#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{   
    // function object(functor):function werapped in class so that it available like an object
    int arr[]={23,45,2,6,87,73};
   // sort(arr,arr+6);
    sort(arr,arr+6,greater<int>());//arranging flrom greatest to smaller
    for (int i = 0; i <6; i++)
    {
       cout<< arr[i]<<" ";
    }
    
    return 0;
}