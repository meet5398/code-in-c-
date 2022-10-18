/*
for a protected ::-
             public derivation || private derivation ||     not inherited
 public        public          |  private    |                protected
protected      protected        | private    |                 protected
*/
#include <iostream>
using namespace std;
class star
{
protected:
    int a;

private:
    int b;
};
class moon : protected star
{
};
int main()
{
    star s;
    moon m;
    //cout<<m.a;    ||:will not work since it is protected in both base and derived class
    return 0;
}