#include<iostream>
using namespace std;
#define rows 4 //declaring constant
#define col 4

int main()
{
    int myArray[rows][col];//={{1,2,3,9},{4,5,6,9},{7,8,9,9}};

    //int myArray[rows][col]={0};

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"\nmyArray[i][j]=";
            cin>>myArray[i][j];
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<myArray[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
