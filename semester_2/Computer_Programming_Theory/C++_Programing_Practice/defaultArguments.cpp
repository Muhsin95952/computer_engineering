#include<iostream>
#include<string>
using namespace std;
void temp (char []="Pakistan", int=2);

int main()
{
    temp();
    //char myCity[15]={"Islamabad"};
    string myCity="ISLAMABAD"; //IN C++
    //char myCity[15]={'I','S','L','A','M','A','B','A','D','\0'}; //in C
    temp(myCity, 10);

    return 0;
}

void temp (char x[15], int y)
{
    for (int c=1; c<=y; c++)
    {
        cout<<x<<endl;
    }
}
