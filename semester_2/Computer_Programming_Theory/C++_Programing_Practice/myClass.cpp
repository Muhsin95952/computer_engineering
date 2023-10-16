#include<iostream>
using namespace std;

class myClass
{
    private:
    int studentID;

    public:
    void getDate(void);

    myClass()
    {
        cout<<"\nThis is constructor";
        cout<<"\nObject Created";
    }
    ~myClass()
    {
        cout<<"\nThe Object is Deleted";
    }


    void gStudentID(void)
    {
    cout<<"\nStudent ID=";
    cin>>studentID;
    }

    void pStudentID(void)
    {
        cout<<"\nEntered Student Id is"<<studentID;
    }

};


void myClass::getDate(void)
{

    cout<<"\nToday is 30 December 2019"<<endl;
}


int main()
{

    myClass mC;


    mC.gStudentID();
    mC.pStudentID();
    mC.getDate();

    return 0;
}

