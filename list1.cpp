#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    list<int> ::iterator itr;
    for (itr=l.begin();itr!=l.end();itr++)
    {
      cout<<"  ";
      cout<<*itr<<"";
    }
    
  cout<<endl;
}
int main()
{
    list<int>list1;
    list1.push_back(34);
    list1.push_back(5);
    list1.push_back(76);
    list1.push_back(87);
    list1.push_back(9);
    display(list1);
    list<int>list2(3);
    list<int>::iterator itr;
    itr=list2.begin();
    *itr=56;
    itr++;
    *itr=98;
    itr++;
    *itr=14;
    display(list2);
    return 0;
}