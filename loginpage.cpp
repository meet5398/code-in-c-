#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
bool isloginpage()
{
    string username,password,un,pd;
    cout<<"enter user name\n"<<endl;
    cin>>username;
    cout<<"enter password\n"<<endl;
    cin>>password;
    ifstream read("user"+username+".txt");
    getline(read,un);
    getline(read,pd);
    if (un==username && pd== password)
    {
    //    cout<<"login successful"<<endl;
       return true;
    }
    else
    {
        return false;
    }
    

}
int  main()
    {
        string username ,password;
        int choice;
        cout<<"enter your choice::\n 1 for login \n 2 for registration \n";
        cin>>choice;
        if (choice==2)
        {
        cout<<"enter username \n";
        cin>>username;
        cout<<"enter password \n";
        cin>>password;
        fstream write ("user"+username+".txt");
        write<<username<<endl;
        write<<password<<endl;
        cout<<endl;
        main();
        }
        else if (choice==1)
        {
            bool status=isloginpage();
            if (!status)

            {
                cout<<"false credential\n";
                system("pause");
                return 0;
            }
            else
            {
                cout<<"successful login!!";
                system("pause");
                return 1;
            }       
        }
    }
