#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream  a("sample1.txt");
    string m;
    cout<<"enter your  name"<<endl;
    cin>>m;
    a<<m;
    a.close();
    ifstream  c("sample2.txt");
    string t;
    getline(c,t);
    // c>>t;
    cout<<" my  name is "<<t<<endl;
    c.close();
    return 0;
}