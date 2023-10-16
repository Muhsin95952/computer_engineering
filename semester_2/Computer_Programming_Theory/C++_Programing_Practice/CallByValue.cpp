#include<iostream>
using namespace std;
void mySwap(int, int);

int main()
{

    int x=10;
    int y=20;

    cout<<"Before Swapping \n";
    cout<<"Value of X="<<x<<endl;
    cout<<"Value of Y="<<y<<endl;

    mySwap(x,y);

    cout<<"After Swapping \n";
    cout<<"Value of X="<<x<<endl;
    cout<<"Value of Y="<<y<<endl;

    return 0;
}

void mySwap(int p, int q)
{
    int temp=p; //10
    p=q; //20
    q=temp; //10

    cout<<"After Swapping \n";
    cout<<"Value of P="<<p<<endl;
    cout<<"Value of q="<<q<<endl;
}

