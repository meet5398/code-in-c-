//distance between two points
#include<iostream>
#include<math.h>
using namespace std;
class point
{
 int a;
 int b;
  public:
   point(int x ,int y)
   {
       a=x;
       b=y;
   }
   void display()
   {
       cout<<"point is ( "<<a<<","<<b<<")"<<endl;
   }
 friend void distance(point p1,point p2);
};
 void distance(point p1,point p2)
{
      int a= p2.a -p1.a;
      int b= p2.b- p1.a;
      double distance=sqrt(a+b);
      cout<<"distance between two pont is  "<<distance<<endl;
}

int main()
{
    point p1(3,4);
    point p2(6,7);
    p1.display();
    p2.display();
    distance(p1,p2);
    return 0;
}