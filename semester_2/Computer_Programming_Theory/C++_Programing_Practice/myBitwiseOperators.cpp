#include<iostream>
using namespace std;

int main()
{
    int A=1;
    int B=6;

    int resultAND=0;
    int resultOR=0;

    resultAND=A&B;
    resultOR=A|B;

    cout<<"AND="<<resultAND<<endl;
    cout<<"OR="<<resultOR;


    return 0;
}
