#include<iostream>
using namespace std;
void printMyStar(int);

int main()
{
    for (int q=0;q<5;q++)
    {
        printMyStar(5);
    }
    return 0;
}

void printMyStar(int x)
{
    static int i=0; //static local variable
    //int i=0; //local variable
    cout<<"Value of Static i="<<i<<endl;
    for (int q=0;q<x;q++)
    {
        cout<<"*";
    }
    i++;
    cout<<"\n";
}
