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
    list1.push_back(31);
    list1.push_back(56);
    list1.push_back(98);
    list1.push_back(2);
    display(list1);
    //** removing element from the list***
    //list1.pop_back();//pop from back of the list
    //list1.pop_front();//pop from the front
    // list1.remove(76);//removing the element from the begining
    // display(list1);
    //sorting of the list*****
    //  list1.sort();
    // display(list1);
    //  list<int>list2(3);
    //  list<int>::iterator itr;
    //  itr=list2.begin();
    //  *itr=56;
    //  itr++;
    //  *itr=98;
    //  itr++;
    //  *itr=14;
    //  display(list2);
    //merging of the list***
    // cout<<"list 1 after merging is ";
    //   list1.merge(list2);
    //   display(list1);
    //for reversing the list***
    //list1.reverse();
    //display(list1);
    return 0;
}