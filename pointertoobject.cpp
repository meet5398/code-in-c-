#include<iostream>
using namespace std;
class complex {
    int real;
    int imaginary;
    public:
    void getdata()
    {
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;

    }
    void setdata()
    {
        real=45;
        imaginary=12;
    }
};

int main()
{  //complex c1;
   //c1.setdata();
   //c1.getdata();
   // complex c1;
    //complex *ptr=&c1;(*ptr  means dereference of ptr)
    complex *ptr=new complex;//using new ,new object is created
   // (*ptr).setdata(); is exactly same as
   ptr->setdata();//it means that set data of object which is point by ptr
  //  (*ptr).getdata();is eactly same as
  ptr->getdata();// this is called arrow opearator
    return 0;
}