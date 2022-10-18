#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setrollno(int a)
    {
        rollno = a;
    }
    void getrollno()
    {
        cout << "roll no is" << rollno << endl;
    }
};
class test : virtual public student
{
protected:
    int physics;
    int maths;

public:
    void setmarks(int a, int b)
    {
        physics = a;
        maths = b;
    }
    void getmarks()
    {
        cout << "marks of physics is:" << physics << endl;
        cout << "marks of maths is:" << maths << endl;
    }
};
class sports : virtual public student
{
protected:
    int football;
    int bb;

public:
    void setsport(int a, int b)
    {
        football = a;
        bb = b;
    }
    void getsport()
    {
        cout << "marks of football is:" << football << endl;
        cout << "marks of bb is:" << bb << endl;
    }
};
class result : public sports, public test
{
public:
    void result1()
    {   getrollno();
        cout << "total marks ==:" << physics + maths + football + bb << endl;
    }
};
int main()
{
    result r;
    r.setrollno(5398);
    r.setmarks(56, 89);
    r.setsport(98, 99);
   // r.getrollno();
    r.getmarks();
    r.getsport();
    r.result1();
    return 0;
}