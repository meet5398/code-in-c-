#include<iostream>
#include<vector>
using namespace std;
template<class t>
void display(vector<t> &v1){
    cout<<"displaying this vector"<<endl;
    for (int i = 0; i <=v1.size(); i++)
    {   
        
        cout<<v1[i]<<" ";
       // cout<<v1.at(i)<<" ";
        
    }
    cout<<endl;
}

int main()
{  //  ways to create a vector
    vector <int> vec1;//zero length integer vector
    //display(vec1);
    vector<char> vec2(4);//5 element character vector
    //vec2.push_back('m');
    //display(vec2);
    vector<char> vec3(vec2);// 5 element character vector from vector 2
   // display(vec3);
    vector<int> v(6,3); //6 elements vector of 3s
    v.pop_back();
    display(v);
    int element,size=5;
    return 0;
}