#include<iostream>
using namespace std;

int main()
{
    int myArray[10]={0};
    int j=0;
    int sum=0;

    //cin loop
    for (j=0;j<10;++j)
    {
        cout<<"Please Enter myArray["<<j<<"]=";
        cin>>myArray[j];
    }

    //printing loop
    j=0; //reset
    do
    {
        //cout<<"\nj = "<<j;
        sum+=myArray[j];
        //sum=sum+myArray[j];

        j++;
    }while(j<10);

    cout<<"SUM = "<<sum;
    return 0;
}
