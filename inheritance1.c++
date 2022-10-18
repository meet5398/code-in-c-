//synatax of inheritance
#include<iostream>
using namespace std;
class employee
{
   
   
   
   public:
   int id;
   float salary;
   employee(int a)
   {    
       id=a;
       salary=45;
       
   }
   employee(){}
};
//derived class syntax
// class {{derived class name}}: {{visibility mode}}{{ base class name}}
// {
//     class member/method/ etc;
// }
/*notes
1.default visibility mode is private.
2.public visiblity mode:public member of the base class become public member of derived class.
3.private visibility mode:public member of the base class become private member of derived class.
4.private member of base class never be inherited.
*/
class programer: public employee
{
   int  value=98;
   public:
   programer(int b,int c)
   {
      id=b;
      salary=c;
   }
};
int main()
{
    employee e1(1);
    cout<<e1.id<<endl;
    cout<<e1.salary<<endl;
    programer p1(2,54);
    cout<<p1.id<<endl;
    cout<<p1.salary<<endl;

    return 0;
}