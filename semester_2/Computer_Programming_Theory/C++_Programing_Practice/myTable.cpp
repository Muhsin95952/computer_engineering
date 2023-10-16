#include<iostream>
using namespace std;

int main()
{
    int myTable;

    cout<<"Enter Table Value=";
    cin>>myTable;

    //int myCount;

        for(int myCount=0;myCount<11;myCount++) //inner loop
        {
            cout<<myTable<<"x"<<myCount<<"="<<myTable*myCount<<endl;
            //cout<<"   ";
        }

    return 0;
}
