//destructor:::destructor destroy the object and free the memory which were occupied by constructor
#include<iostream>
using namespace std;
int count=0;
class num
{
   public:
   num()
   {
  count++;
   cout<<"this is the time constructor is called for object no"<<count<<endl;
   }
   ~num()//ddestructor never takes argument and never return the value
   {
       cout<<"this is the time destructor is called for object no"<<count<<endl;
       count--;

   }
};

int main()
{
    cout<<"we are in our main function "<<endl;
    cout<<"creating first oject n1"<<endl;
    num n1;
    {  
        cout<<"'entering this block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main "<<endl;
    
    return 0;
}