#include <iostream>
#include <string.h>
using namespace std;
/*
   ### rules for virtual function ####
  // 1.they can not be static 
  // 2.they are accssed by object pointer
   // 3.virtual function can be friend of another class..
  //  4.A virtual function in base might not be used...
  // 5.if a virtual function is defined in base class there is no neceessity of redefining it in derived class
*/
class abp
{

protected:
    string title;
    float rating;

public:
    abp(string s, float a)
    {
        title = s;
        rating = a;
    }
    virtual void display() {}
};
class abpvideo : public abp
{

    float videolength;

public:
    abpvideo(string s, float a, float length) : abp(s, a)
    {
        videolength = length;
    }
    void display()
    {
        cout << "the title is" << title << endl;
        cout << "the length of movie is" << videolength << endl;
        cout << "the rating out of 5 is" << rating << endl;
    }
};
class abptext : public abp
{

    int word;

public:
    abptext(string s, float a, int w) : abp(s, a)
    {
        word = w;
    }
    void display()
    {
        cout << endl;
        cout << "the title is" << title << endl;
        cout << "the rating out of 5 is" << rating << endl;
        cout << "the word of movie is" << word << endl;
    }
};
int main()
{
    string title;
    float rating;
    float length;
    int words;

    title = "abp video player";
    rating = 4.5;
    length = 6.4;
    abpvideo video(title, rating, length);

    title = "abp text file";
    rating = 4.8;
    words = 67;
    abpvideo text(title, rating, words);

    abp *p[1];
    p[0] = &video;
   // p[1] = &text;

    p[0]->display();
   // p[1]->display();
    return 0;
}