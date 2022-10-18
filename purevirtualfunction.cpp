/*abstraact base class and pure  virtual function
//abstract base class: it has atleast one pure virtual function(one base class is created after words derived class is made and
 derived class object is used furthure not of base class) */  
 
 #include<iostream>
#include<string.h>
using namespace std;
class abp
{  
    protected:
   string title;
   float rating;
   public:
     abp(string s,float a)
     {
         title=s;
         rating=a;
     }
    virtual void display()=0;//do nothing function --->virtual function
};
class abpvideo:public abp
{
   
   float videolength;
   public:
   abpvideo(string s,float a,float length):abp(s,a){
       videolength=length;
   }
   void display(){
       cout<<"the title is "<<title<<endl;
       cout<<"the length of movie is "<<videolength<<endl;
       cout<<"the rating out of 5 is "<<rating<<endl;
   }
 };
class abptext:public abp
{
   
   int word;
   public:
   abptext(string s,float a,int w):abp(s,a){
       word =w;
   }
   void display(){
      cout<<endl;
      cout<<"the title is"<<title<<endl;
      cout<<"the rating out of 5 is"<<rating<<endl;
      cout<<"the word of movie is"<<word<<endl;
   }
};
int main()
{
    string title;
    float rating;
    float length;
    int words;
  
    title="abp video player";
    rating=4.5;
    length=6.4;
    abpvideo  video(title,rating,length);

    title="abp text file";
    rating=4.8;
    words=67;
    abptext text(title,rating,words);
    
    abp*  p[2];
    p[0]=&video;
    p[1] = &text;

    p[0]->display();
    p[1]->display();

    

    return 0;
}