// how to use structure and typedef in structure 
#include<iostream>
#include<string.h>
using namespace std;
typedef struct student
{
    char name[34];
    int roll_no;
    int classes;

}stu;


int main()
{
   
    struct student s1;
   strcpy( s1.name,"meet");
    s1.roll_no=5398;
    s1.classes=14;
    cout<<"name is "<<s1.name<<endl;
    cout<<"roll_no is"<<s1.roll_no<<endl;
    cout<<"class is"<<s1.classes<<endl;

    stu s2;
   strcpy( s2.name,"ronak");
    s2.roll_no=5614;
    s2.classes=1;
    cout<<"\n\nname is "<<s2.name<<endl;
    cout<<"roll_no is"<<s2.roll_no<<endl;
    cout<<"class is"<<s2.classes<<endl;

    return 0;
}