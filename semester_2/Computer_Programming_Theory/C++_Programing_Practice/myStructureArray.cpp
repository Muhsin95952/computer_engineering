#include<iostream>

using namespace std;

int main()
{
    struct result
    {
        char name[15];
        int sub[4];
        int total;
        char grade;
    };


    result student[5]={{"Athar" ,{62,69,70,40},2220,'F'},

                      {"Javed" ,{162,169,170,140},453,'P'},
                      {"Sethi" ,{262,269,270,240},2453,'P'},
                      {{'k','a','l','e','e','m','\0'} ,{362,369,370,340},453,'P'},
                      {"Muhammad" ,{462,469,470,440},453,'P'}
                    };


    //result student= {{'k','a','l','e','e','m','\0'} ,{62,69,70,40},453,'P'};

    //cout<<"\nYour Name is="<<student.name<<endl;
    //cout<<"\nYour Subject Marks="<<student.sub[0]<<endl;
    //cout<<"\nYour Total Marks="<<student.total<<endl;
    //cout<<"\nYour FYP Grade="<<student.grade<<endl;


   for (int i=0;i<5;i++)
   {
        cout<<"\nYour Name is="<<student[i].name<<endl;

        for (int j=0;j<4;j++)
        {
            cout<<"\nYour Subject Marks="<<student[i].sub[j]<<endl;
        }
        cout<<"\nYour Total Marks="<<student[i].total<<endl;
        cout<<"\nYour FYP Grade="<<student[i].grade<<endl;
        cout<<"***********************************"<<endl;
   }

    return 0;
}
