#include<iostream>
using namespace std;

int main()
{

    float myArray[10]={0};

    myArray[0]=1.8;
    myArray[1]=2.6;
    myArray[2]=3;
    myArray[3]=4;
    myArray[4]=5;
    myArray[5]=6;
    myArray[6]=7;
    myArray[7]=8;

    myArray[9]=10;



   //char myArr[4]={'a','b','c'};

    myArray[6]=23457;

    for (int i=0;i<10;i++)
      cout<<"myArray["<<i<<"]="<<myArray[i]<<endl;


    return 0;
}
