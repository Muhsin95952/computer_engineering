#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int y=0;
    int z=0;

    y=x--; //y=10;x=9
    z=--x; //x=8;z=8

    cout<<"\nX="<<x;
    cout<<"\nY="<<y;
    cout<<"\nZ="<<z;

    return 0;
}
