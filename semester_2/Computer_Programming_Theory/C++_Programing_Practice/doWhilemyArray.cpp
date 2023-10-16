#include<iostream>
using namespace std;

int main()
{
    int myArray[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;

    do
    {

        cout<<"myArray["<<i<<"]="<<myArray[i]<<endl;
        //cout<<myArray[i]<<endl;
        i++;

    }while(i<10);

    return 0;
}
