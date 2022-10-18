#include <iostream>
using namespace std;
class item
{
    int id;
    int price;

public:
    void setvalue(int a, int b)
    {
        id = a;
        price = b;
    }
    void getvlaue()
    {
        cout << "id of item is" << id << endl;
        cout << "price of item is" << price << endl;
    }
};

int main()
{
    int m, i, p, q;

    cout << "enter the total item" << endl;
    cin >> m;
    item *ptr = new item[m];
    item *ptrnext = ptr;
    for (i = 0; i < m; i++)
    {
        cout << "enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setvalue(p, q);
        ptr->setvalue(p,q);//arrow operator is used
        ptr++;
    }

    for (i = 0; i < m; i++)
    {   
        cout << "id and price of item  " << i + 1 << " is " << endl;
        (*ptrnext).getvlaue();
        ptrnext++;
    }

    return 0;
}