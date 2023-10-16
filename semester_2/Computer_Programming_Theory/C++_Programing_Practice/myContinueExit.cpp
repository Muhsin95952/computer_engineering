#include<iostream>
using namespace std;

int main()
{
    int myTable=2;
    int myCount=0;

        for(myCount=1;myCount<11;myCount++)
        {
            if (myCount==5)
                //continue;
                break;
                //exit(1);
            else
                cout<<myTable<<"x"<<myCount<<"="<<myTable*myCount<<endl;
        }

    cout<<"\n We Are Out From For Loop";

    return 0;
}
