#include<iostream>
using namespace std;
//int myAdd(int, int);
void myAdd(int, int);
//void myAdd(int, int); //prototype
//int myAdd(int, int);
//int myAdd(int, int);
float mySub(float, float);
//float mySub(float, float);

int main()
{
    int x;
    int y;
    int myresult;
    //float result;

    x=10;
    y=20;

    myAdd(40,60);
    //cout<<"Add Result At Main="<<myresult<<endl;
    //cout<<"x="<<x<<endl;
    //cout<<"y="<<y<<endl;

    //result=mySub(50.20,20.56);
    cout<<"SUB Result="<<mySub(50.20,20.56)<<endl;
    //mySub(50,20);

    return 0;
}

void myAdd(int var1, int var2)
{
    int result;
    //var1=80;
    //var2=80;
    result=var1+var2;
    cout<<"Add Result="<<result<<endl;
    //return result;
}


float mySub(float var1, float var2)
{
    float myResult;
    myResult=var1-var2;
    //cout<<"SUB Result="<<myResult;
    return myResult;

}

