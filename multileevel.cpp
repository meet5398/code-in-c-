#include<iostream>
using namespace std;
class student
{
  protected:
  int roll_no;
  public:
  void setroll_no(int);
  void getroll_no();
};
void student::setroll_no(int b)
{
   roll_no=b;  
}
void student::getroll_no()
{
    cout<<"roll no is :  "<<roll_no<<endl;
}
class marks:public student
{
  protected:
  float maths;
  float physics;
  public:
  void set_marks(float,float);
  void get_marks();
};
void marks::set_marks(float a,float b)
{
    maths=a;
    physics=b;
}
void marks::get_marks()
{
    cout<<"marks in maths is "<<maths<<endl;
    cout<<"marks in physics is  "<<physics<<endl;

}
class result:public marks
{
   public:
   void res()
   {
       getroll_no();
       get_marks();
       cout<<"percentage is "<<(physics+maths)/2<<"%"<<endl;

   }

};
int main()
{
    result ronak;
    ronak.setroll_no(5614);
    ronak.set_marks(98,76);
    ronak.res();
    return 0;
}