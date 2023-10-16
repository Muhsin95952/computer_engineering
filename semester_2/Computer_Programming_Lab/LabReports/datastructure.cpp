#include <iostream>
using namespace std;

struct data
{
    char name[50];
    char reg[50];
    char sem[50];
    
} all,all1,all2;

        void getdata(){
           
    cout<<"Enter name\n";
    cin>>all1.name;
    cout<<"enter reg\n";
    cin>>all1.reg;
    cout<<"Enter semester\n";
    cin>>all1.sem;
    cout<<"Name: "<<all1.name<<endl<<"reg: "<<all1.reg<<endl<<"SEMESTER: "<<all1.sem<<endl;
    cout<<endl;
    cout<<"Enter name\n";
    cin>>all.name;
    cout<<"enter reg\n";
    cin>>all.reg;
    cout<<"Enter semester\n";
    cin>>all.sem;
    cout<<"Name: "<<all.name<<endl<<"reg: "<<all.reg<<endl<<endl<<"SEMESTER: "<<all.sem<<endl;
    cout<<endl;

    cout<<"Enter name\n";
    cin>>all2.name;
    cout<<"enter reg\n";
    cin>>all2.reg;

    cout<<"Enter semester\n";
    cin>>all2.sem;
    cout<<"Name: "<<all2.name<<endl<<"reg: "<<all2.reg<<endl<<"SEMESTER: "<<all2.sem<<endl;
    cout<<endl;
    string r;
    cout<<" SEARCH USER INFO VIA ITS REGISTRATION NUMBER\n"<<endl;
    cout<<"Enter reg name\n";
    cin>>r;
      if (r==(all.reg))
      {
        cout<<"Name: "<<all.name<<endl<<"reg: "<<all.reg<<endl<<"SEMESTER: "<<all.sem<<endl;
          
      }
      else if (r==(all1.reg))
      {
        cout<<"Name: "<<all1.name<<endl<<"reg: "<<all1.reg<<endl<<"SEMESTER: "<<all1.sem<<endl;
          
      }
      else if (r==(all2.reg))
      {
             cout<<"Name: "<<all2.name<<endl<<"reg: "<<all2.reg<<endl<<"SEMESTER: "<<all2.sem<<endl;
           }    
  }
int	main()
{   getdata();

    return 0;
}
