#include<iostream>
using namespace std;

int main()
{
    int myWinner=0;

    cout<<"Please Enter Winner Code=";
    cin>>myWinner;


    switch (myWinner)
    {
    case 1:
        cout<<"Pakistan\n";
        break;
    case 2:
        cout<<"\nEngland";
        break;
    case 3:
        cout<<"\nWest Indies";
        break;
    default:
        cout<<"\nWrong Code";
        //break;
    }

    cout<<"\nWe are out from Switch Structure"<<endl;

    return 0;
}

