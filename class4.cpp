// static member function
#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata();
    void display();
    static void getcount();
};
void employee::getcount()
{
    cout << "count is" << count << endl;
}
void employee::setdata()
{
    cout << "enter the id of the employee" << endl;
    cin >> id;
    count++;
}
void employee::display()
{
    cout << "the id of the employee is  " << id << "   employee  no is  " << count << endl;
}
int employee::count; //if you want to start from 1000 then you can make count=1000 here...
int main()
{
    employee meet, rohan, ronak;
    meet.setdata();
    meet.display();
    meet.getcount();

    rohan.setdata();
    rohan.display();
    meet.getcount();
    ronak.setdata();
    ronak.display();
    meet.getcount();

    return 0;
}