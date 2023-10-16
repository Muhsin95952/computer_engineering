#include<iostream>
using namespace std;
void square(int*);

int main()
{
    int myVar=10;
    cout<<"My Var="<<myVar<<endl;

    square(&myVar);

    cout<<"My Var="<<myVar<<endl;

    return 0;
}
void square(int* x)
{
    *x=(*x)*(*x);
}
