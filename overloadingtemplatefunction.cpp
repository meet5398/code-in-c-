#include<iostream>
using namespace std;
void func(int c)
{
    cout<<" i am first func() "<<c<<endl;
}
template<class t>
void func(t c){
    cout<<"this is templatised func() "<<c<<endl;
}
template<class t>
void func1(t c){
    cout<<"this is templatised func1() "<<c<<endl;
}
int main()
{
    func(4);//exact match takes the highest prioirity. 
    func1(8);//exact matches takes the highest priority.
    return 0;
}