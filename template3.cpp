//program for multitemplate
#include <iostream>
using namespace std;
/*
  class template with multiple parameter(one,two or more than two)
  template<class t1,class t2...(coma separated)>
  class  name of class{
      //body
  }
*/
template <class t1, class t2>
class division
{

public:
    t1 a;
    t2 b;
    void set(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "division is" << a << b << endl;
    }
};

int main()
{
    division<int, char> d1;
    division<float, char> d2;
    division<int, float> d3;
    d1.set(12, 'b');
    d1.display();
    d2.set(12.456, 'm');
    d2.display();
    d3.set(14, 12.45);
    d3.display();
    return 0;
}