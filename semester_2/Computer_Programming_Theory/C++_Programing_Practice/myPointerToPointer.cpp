#include<iostream>
using namespace std;

int main()
{
    int var = 10;

    int* ptr1 = &var;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;


    cout<<*ptr1<<endl<<**ptr2<<endl<<***ptr3;

    return 0;
}
