#include<iostream>
using namespace std;

int main()
{

    int myMarks=0;

    cout<<"Enter Marks=";
    cin>>myMarks;
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
    (myMarks>=90)?(cout<<"Pass"):(cout<<"Fail");


    return 0;
}
