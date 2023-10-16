#include<iostream>
using namespace std;
int myAdd(int, int);

int main()
{
    int p;
    int q;
    int result;

    p=10;
    q=10;

    result=myAdd(p,q);

    cout<<"\nP="<<p;
    cout<<"\nQ="<<q;
}

int myAdd(int x, int y)
{
    cout<<"\nAfter Calling X="<<x;
    cout<<"\nAfter Calling Y="<<y;

    x=11;
    y=11;

    cout<<"\nX="<<x;
    cout<<"\nY="<<y;
}
