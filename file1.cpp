#include <iostream>
#include <fstream>
using namespace std;
/*  the usefull classes for working with files in c++
    1.fstreambase
    2.ifstream | derived from fstreambase
    3.ofstream | derived from fstreambase
*/
int main()
{
    // primarily there are two method to read the file
    //    1.constructor
    //    2.member function open()
    // here we will do using constructor first
   // string st = "meet sinh mori";
    // opening the file usjing the constructor
    //ofstream outwet("jenish.txt"); //write operation
    //outwet<< st;
    ifstream in("sample2.txt"); //reading the file
    string a;
    in>>a;
    getline(in, a);
    cout << a << endl;
    return 0;
}