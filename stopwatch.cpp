#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
void display();
 int hh=0,mm=0,ss=0,choice;
int main()
{  
    cout<<"Enter any key to start the stop watch "<<endl;
    cin>>choice;
 cout<<"HH : MM : SS"<<endl;
   while(!kbhit())
   {
       display();
        ss++;
     Sleep(1000);
    
    if(ss>59)
      {  mm++;
        ss=0;
      }
    if(mm>59){
        hh++;
        mm=0;
    }  
   }
}
void display(){
  system("CLS");
   cout<<"HH : MM : SS"<<endl;
    cout<<hh<<" :  "<<mm<<" :  "<<ss<<endl;
    fflush(stdin);
}