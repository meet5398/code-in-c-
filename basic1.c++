/*here in code glo above int main is global variable
 and inside main is local variable*/
#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a; 
    cout<< glo<<endl;//here global variable is accesed
    }

int main(){
    int glo=9;
    glo=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = true;   // it is boolen data type it states true and  false
    sum();
    cout<<glo<<endl<< is_true;//here local variable is accessed
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}
