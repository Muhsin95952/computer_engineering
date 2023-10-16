#include<iostream>
using namespace std;

int main()
{
    int x=10;

    cout<<"\nX="<<x;
    cout<<"\nAddress of X="<<&x;

    int *q;
    q=&x;
    *q=20; //x=20

    cout<<"\nNew value of X="<<x;

    return 0;
}
