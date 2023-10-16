#include<iostream>
using namespace std;

int main()
{
    //int myCountFor=0;
    //int myCountWhile=0;
    //int myCountDoWhile=0;

    int myConditionFor=1;
    int myConditionWhile=1;
    int myConditionDoWhile=1;

    for (         ;myConditionFor<11;myConditionFor++)
    {
        cout<<"Pakistan\n";
    }

    while (myConditionWhile<11)
    {
        cout<<"Computer Programming\n";
        myConditionWhile++;
    }

    do
    {
        cout<<"Great\n";
        myConditionDoWhile++;
    } while (myConditionDoWhile<11);

    return 0;
}
