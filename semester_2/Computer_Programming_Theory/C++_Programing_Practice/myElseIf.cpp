#include<iostream>
using namespace std;

int main()
{

    int winner=0;

//myrepeat: //Label

    cout<<"\nEnter Winner Code";
    cin>>winner;

    if (winner==22)
        cout<<"\nPakistan";
    else if (winner==23)
                cout<<"\nPalestine";
    else if (winner==24)
                cout<<"\nAustralia";
    else
                cout<<"\nWrong Code, Reenter";

//goto myrepeat;

    return 0;
}
