// function overloading-->it means that you can use same function name for multiple task
#include<iostream>
using namespace std;
int volume(double r,int h)
{
    return (3.14*r*r*h);
    
}
int volume(int l,int b,int h)
{
    return (l*b*h);

}
int volume(int a)
{
    return (a*a*a);

}
int main()
{
    cout<<"the volume of the cylinder is"<<volume(3,5)<<endl;
    cout<<"the volume of the cuboid is"<<volume(4,5,2)<<endl;
    cout<<"the volume of the cube  is"<<volume(8)<<endl;
    return 0;
}