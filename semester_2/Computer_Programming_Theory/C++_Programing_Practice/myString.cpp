#include<iostream>
#include<string>
using namespace std;

int main()
{
    int myVar=10;
    string myStringVar1="I am Learning Programming";
    cout<<"String 1="<<myStringVar1<<endl;

    cout<<"The Size of String 1 is "<<myStringVar1.size()<<endl;

    string myStringVar2;
    cout<<"String 2=";
    getline(cin, myStringVar2);
    cout<<"You Entered="<<myStringVar2<<endl;

    string myStringVar3;
    cout<<"String 3=";
    cin>>myStringVar3;
    cout<<"You Entered="<<myStringVar3<<endl;


    string myStringVar4;
    cout<<"String 4 is assigned String1="<<myStringVar4.assign(myStringVar1);

    myStringVar2.swap(myStringVar1);
    cout<<"\nString 2 is swaped with String1::STRING2="<<myStringVar2<<endl;
    cout<<"String 2 is swaped with String1::STRING1="<<myStringVar1<<endl;

    return 0;
}


