#include<iostream>
#define mySize 10
using namespace std;
void printArray(int []);
//int myGlobalVariable=90;

int main()
{
    int myArray[mySize]={1,2,3,4,5,6,7,8,9,10};
/*
    for (int i=0;i<mySize;++i)
    {
        cout<<"\nPlease enter array index["<<i<<"] value=";
        cin>>myArray[i];
    }
*/
    printArray(myArray);

    return 0;
}

void printArray(int a[])
{
    for (int i=0;i<mySize;i++)
    {
        cout<<"Printing Array By index ";
        cout<<"myArray["<<i<<"]="<<a[i]<<endl;
    }

    //cout<<"myArray="<<*a<<endl;
    for (int i=0;i<mySize;i++)
    {
        cout<<"Printing Array By Memory Address ";
        cout<<"myArray["<<i<<"]="<<*(a+i)<<endl;
        //a++;
    }

}
