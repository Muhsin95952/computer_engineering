#include<iostream>
using namespace std;

int main()
{
    int age=0;

    cout<<"Please Enter Age=";
    cin>>age;

    //cout<<"Default Age value="<<age;

    if (age>=18)
    {
        cout<<"\nIssue Licence";
        cout<<"\nWoW";
    }
    else
    {
        cout<<"No Licence, Come Again";
    }

    return 0;
}
