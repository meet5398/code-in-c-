#include<iostream>
// friend function
/*
  1.not in the scope of the class
  2. since it's not in the scope of the class it can not be acceseed by object of the class 
     c1.sum()-->invalid.
  3. can be invoked without the help of any object. 
  4.usually contains object as argument.
  5. can be declared inside private or public section of the class.   
  6.it can not  access the member directly by their names and need object name .member name to access any member.
*/
#include<iostream>
using namespace std;
class complex
{
  int a; 
  int b;
  public:
  void setvalue(int a1,int b1)
  {
      a=a1;
      b=b1;
  }
  void display()
  {
      cout<<"the value is "<<a<<" +  "<<b<<"i"<<endl;
  }
  friend complex sum(complex c1,complex c2)
  {
      complex c3;
      c3.setvalue((c1.a+c2.a),(c1.b+c2.b));
      return c3;


  }
};

int main()
{
    complex c1,c2,s;
    c1.setvalue(2,3);
    c1.display();

    c2.setvalue(1,4);
    c2.display();
    
    s=sum(c1,c2);
    s.display();
    return 0;
}