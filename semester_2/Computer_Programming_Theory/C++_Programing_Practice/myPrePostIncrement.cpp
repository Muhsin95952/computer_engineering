#include<iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;

    y=x++; //x=x+1 y=0;x=1
    z=++x; //x=2; z=2

    cout<<"\nX="<<x;
    cout<<"\nY="<<y;
    cout<<"\nZ="<<z;

    return 0;
}
