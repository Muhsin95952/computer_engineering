#include<iostream>
using namespace std;
int mySum(int, int);
int mySum(int, int, int);
float mySum(float, float, double);

int main()
{

    cout<<"\nMy Two Parameter Integer ADD="<<mySum(20,20);
    cout<<"\nMy Three Parameter Integer ADD="<<mySum(10,20,30);
    cout<<"\nMy Two Parameter Float ADD="<<mySum(10.20,10.20,10.20);
    return 0;
}

int mySum(int x, int y)
{

    return x+y;
}

int mySum(int x, int y, int z)
{
    return x+y+z;
}

float mySum(float x, float y, double z)
{
    return x+y+z;
}
