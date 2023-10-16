#include<iostream>
using namespace std;

int main()
{
    int intvar=10;
    float flovar=11.11;
    void* ptrvoid;

    ptrvoid=&intvar;

    cout<<*(int *)ptrvoid<<endl;

    ptrvoid = &flovar;
    cout<<*(float *)ptrvoid<<endl;

    return 0;
}
