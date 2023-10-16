#include<iostream>
using namespace std;

int main()
{
    int myNumber;
    myNumber=0;

again: //label

    cout<<"\nEnter Number=";
    cin>>myNumber;

    if (myNumber>0)
    {
        if (myNumber%2==0)
            cout<<"\nEven Number";
        else
            cout<<"\nOdd Number";
    }
    else if (myNumber==0)
    {
            cout<<"\nNumber is Zero";
    }
    else
    {
            cout<<"\nNegative Number";
    }

    cout<<"\nGood Bye";

goto again;

    return 0;
}
