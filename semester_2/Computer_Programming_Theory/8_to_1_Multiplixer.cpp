#include<iostream>
using namespace std;

int main()
{

    int inputI0,inputI1,inputI2,inputI3,inputI4,inputI5,inputI6,inputI7;
    inputI0=5;
    inputI1=10;
    inputI2=20;
    inputI3=30;
    inputI4=40;
    inputI5=50;
    inputI6=60;
    inputI7=70;

    int outputF=0;

    int sel0=1;
    int sel1=0;
    int sel2=1;

    //8x1 MUX using Conditional Operator

    outputF=sel2==0?(sel1==0?(sel0==0?inputI0:inputI1):(sel0==0?inputI2:inputI3)):
                    (sel1==0?(sel0==0?inputI4:inputI5):(sel0==0?inputI6:inputI7));
    cout<<"Output="<<outputF;


    return 0;
}
