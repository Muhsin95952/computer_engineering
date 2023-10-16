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

    myStudent S1={"Athar",12345};
    myStudent S2={"Javed",67890};


    cout<<"\nYour Name is="<<S1.studName<<endl;
    cout<<"\nYour Roll Number is="<<S1.studRoll<<endl;

    cout<<"\nYour Name is="<<S2.studName<<endl;
    cout<<"\nYour Roll Number is="<<S2.studRoll<<endl;

    return 0;
}
