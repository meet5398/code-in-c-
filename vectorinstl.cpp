#include<iostream>
#include<vector>
using namespace std;
template<class t>
void display(vector<t> &v1){
    for (int i = 0; i <v1.size(); i++)
    {
        cout<<v1[i]<<" ";
       // cout<<v1.at(i)<<" ";     
    }
    cout<<endl;
}
int main()
{   int size;
    int element;
    vector <int> vec1;
    cout<<"how many element you want to enter"<<endl;
    cin>>size;
    for (int i = 0; i <size; i++)
    {
       cout<<"enter the element"<<endl;
       cin>>element;
       vec1.push_back(element);
    }
    //vec1.pop_back();
    display(vec1);
    vector<int> ::iterator itr=vec1.begin();
    //vec1.insert(itr+1,566);
    vec1.insert(itr+1,12,566);
    display(vec1);  
    return 0;
}