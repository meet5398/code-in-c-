#include<iostream>
using namespace std;
class base
{
    public:
    int var_base;
    void display(){
        cout<<"displaying the base class variable var_base"<<var_base  <<endl;
    }
};
class derived:public base{
    public:
    int var_derived;
    void display(){
        cout<<"displaying the base class variable var_base"<<var_base<<endl;
        cout<<"displaying the base class variable var_derived"<<var_derived<<endl;
    }
};
int main()
{  base * base_pointer;
   base b1;
   derived d1;
   base_pointer=&d1;
   base_pointer->var_base=45;
   base_pointer->display();
   derived *derived_pointer;
   derived_pointer=&d1;
   derived_pointer->var_derived=78;
   derived_pointer->display();  
    return 0;
}