#include<iostream>
using namespace std;

int main()
{

    int hours=0;
    float rate=0.0;

    cout<<"Enter hours=";
    cin>>hours;
/*
    if (myMarks>=90)
    {
        cout<<"\nPass";
    }
    else
    {
        cout<<"\nFail";
    }
*/
    //(myMarks>=90)?(cout<<"Pass"):(cout<<"Fail");
    rate = (hours > 40) ? 3.50 : 0.25;

    cout<<"\nrate="<<rate;


    return 0;
}
