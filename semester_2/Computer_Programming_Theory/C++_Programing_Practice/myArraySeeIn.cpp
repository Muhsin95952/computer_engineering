#include<iostream>
using namespace std;

int main()
{
    int myArray[10]={0}; //This is array
    int j;
    //cin loop
    for (j=0;j<10;++j)
    {
        cout<<"Please Enter myArray["<<j<<"]=";
        cin>>myArray[j];
    }
    cout<<"\nj="<<j<<endl;
    //printing loop
    j=0; //reset
    while(j<10)
    {
        cout<<"myArray["<<j<<"]="<<myArray[j]<<endl;
        j++;
    }

    return 0;
}
