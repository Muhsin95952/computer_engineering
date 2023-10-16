#include<iostream>
using namespace std;
void printMyStar(int);
int i; //default value is 0, global variable

int main()
{
    //int i; //local variable
    //cout<<"Global Default Value="<<i<<endl;

    for (i=0;i<5;i++)
    {
        cout<<"Value of i in MAIN="<<i<<endl;
        printMyStar(5);
    }
    return 0;
}

void printMyStar(int x)
{
    //int i;
    for (i=0;i<x;i++)
    {
        cout<<"*";
        //cout<<"         Value of i in PrintMyStar="<<i<<endl;
    }
    cout<<"\n";
}
