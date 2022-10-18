#include<iostream>
using namespace std;

int main()
{
    int marks[]={23,34,34,54,34};
    cout<<"marks of student is \n"<<marks[0]<<endl;
    cout<<"marks of student   is   "<<marks[1]<<endl;
    cout<<"marks of student is"<<marks[2]<<endl;
    cout<<"marks of student is"<<marks[3]<<endl;
    cout<<"marks of student is\n"<<marks[4]<<endl;
    // you can change the value 
    marks[4]=43;
    
   /* for (int i = 0; i < 5; i++)
    {
      cout<<"\nthe marks of the " <<i+1<<"is"<<marks[i]<<endl;  
    }
    // using do while and while loop
    int i=0;
    while (i<5)
    {
        cout<<"nthe marks of the " <<i+1<<"is"<<marks[i]<<endl; 
        i++; 
    }*/
    int i=0;
    do
    {
       cout<<"\nthe marks of the " <<i+1<<"is"<<marks[i]<<endl;  
       i++;
    } while (i<5);
    
    
    
    return 0;
}
