#include<iostream>
using namespace std;
float myAdd();

int main()
{
/*
    int x;
    int y;

    x=10;
    y=20;
    cout<<"Result="<<myAdd(x,y);
*/
    float result;
    result=0.0;

    result=myAdd();

    cout<<"Result="<<result;

    return 0;
}

float myAdd()
{
    float result;
    float x;
    float y;

    cout<<"\nPlease Enter X=";
    cin>>x;

    cout<<"\nPlease Enter Y=";
    cin>>y;

    result=x+y;

    //cout<<"Your Result is="<<result;

    return result;
}
