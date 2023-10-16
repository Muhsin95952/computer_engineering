#include<iostream>
using namespace std;

int main()
{
    int myCount=1;
    int myTable=2;

    //cout<<"Table value=";
    //cin>>myTable;
        while(myCount<=10)
        {
            cout<<myTable<<"x"<<myCount<<"="<<myTable*myCount<<endl;
            myCount++;
            //cout<<"myCount="<<myCount<<endl;
        }

    return 0;
}
