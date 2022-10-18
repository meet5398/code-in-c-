#include<iostream>
using namespace std;
template<class t>
class meet{
     public:
     t data;
     meet(t a)
     {
         data=a;
     }
     void display();
};
template<class t>
void meet<t>::display(){
    cout<<data;
}
int main()
{
    meet<int> m(34);
    cout<<m.data;
    return 0;
}