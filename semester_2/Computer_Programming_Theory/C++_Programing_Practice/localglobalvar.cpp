#include<iostream>
using namespace std;
void printMyStar(int);

int main()
{
    int i=0; //local variable
    for (i=0;i<5;i++)
    {
        cout<<"Value of i in MAIN="<<i<<endl;
        printMyStar(5);
    }
    return 0;
}

void printMyStar(int x)
{
    int i; //local variable
    for (i=0;i<x;i++)
    {
        cout<<"*";
        //cout<<"         Value of i in PrintMyStar="<<i<<endl;
    }
    cout<<"\n";
}
