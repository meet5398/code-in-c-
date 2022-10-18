#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    string s="meet sinh nori";
    ofstream of;  
    of.open("file1.txt");
    of<<s;
    of.close();
    ifstream read;
    read.open("sample2.txt");
    string m;
    while(read.eof()==0){
        getline(read,m);
        cout<<m<<endl;
    }
    return 0;
}