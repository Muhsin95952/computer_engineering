#include<iostream>
#include<string>

using namespace std;

int main()
{
    struct myStudent
    {
        string studName;
        int studRoll;
    };

    myStudent S1;

    cout<<"\nPlease enter your name=";
    getline(cin,S1.studName);
    cout<<"\nPlease enter your roll number=";
    cin>>S1.studRoll;

    cout<<"\nYour Name is="<<S1.studName<<endl;
    cout<<"\nYour Roll Number is="<<S1.studRoll<<endl;

    return 0;
}
