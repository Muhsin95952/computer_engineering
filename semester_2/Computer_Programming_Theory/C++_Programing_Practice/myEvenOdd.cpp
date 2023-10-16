#include<iostream>
using namespace std;

int main()
{
    int myNumber=0;

    cout<<"Enter Number=";
    cin>>myNumber;

    if (myNumber>0)
    {
        if (myNumber%2==0)
        {
            cout<<"Even Number";
        }
        else
        {
            cout<<"Odd Number";
        }
    }
    else if (myNumber==0)
    {
            cout<<"Number is Zero";
    }
    else
    {
            cout<<"Negative Number";
    }

    cout<<"\nGood Bye";

    return 0;
}
