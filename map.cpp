#include<iostream>
#include<map>
#include<string.h>
using namespace std;
//map in associative array
int main()
{
    map<string,int>marksmap;
    marksmap["meet"]=98;
    marksmap["raj"]=78;
    marksmap["ronak"]=34;
    map<string,int>:: iterator itr;
    marksmap.insert({{"ravan",34},{"ram",76}});
    for (itr= marksmap.begin(); itr!=marksmap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"the size of map is "<<marksmap.size()<<endl;
    cout<<"the maximum size of map is "<<marksmap.max_size()<<endl;
    cout<<"check for empty status:"<<marksmap.empty()<<endl;
    return 0;
}