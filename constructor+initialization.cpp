//initialization list in constructor
/*
  syntax:::---
  constructor (argument - list):initialization section 
  {
      argument + other code
  }
*/
#include <iostream>
using namespace std;
class base
{  
    int a;
    int b;

public:
   // base(int i, int j) : a(i), b(j)
   // base(int i, int j) : a(i), b(i+j)
    // base(int i, int j) : a(i), b(i*j)
    // base(int i, int j) : a(i), b(a+j)
   // base(int i, int j) :  b(j),a(i+b) |||:||red flag this will  create problem 
                                         //because a will be initialized first 
   // base(int i, int j) :  b(j),a(i+b)
   base(int i,int j) :a(i)
    {   b=j;
        cout << "initialization is done" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }

    base() {}
};

int main()
{
    base b(3, 5);
    return 0;
}