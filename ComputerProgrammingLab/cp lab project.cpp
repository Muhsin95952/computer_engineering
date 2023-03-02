#include <iostream>
using namespace std;

void welcome()
{
    cout<<"     **************************"<<endl;
    cout<<"          ||  WELCOME  ||       "<<endl;
    cout<<"          ||    TO     ||       "<<endl;
    cout<<"          ||   MUHAFIZ ||       "<<endl;
    cout<<"          ||  AIRLINE  ||       "<<endl;
    cout<<"          ||  BOOKING  ||       "<<endl;
    cout<<"          ||  SYSTEM   ||       "<<endl;
    cout<<"     **************************"<<endl;
    cout<<"                                "<<endl;
    cout<<"           *** MENU ***         "<<endl;

}
void menu()
{
    cout<<"Are you a user ?"<<endl;
    cout<<"1.yes"<<endl;
    cout<<"2.no"<<endl;
}
void options()
{
    cout<<"Chose your option :"<<endl;
    cout<<endl;
    cout<<"1.See flight schedule"<<endl;
    cout<<"2.Reserve Ticket"<<endl;
    cout<<"3.Exit"<<endl;
}
void dubai()
{
  cout<<"  Date          Flight          Time          Departure          Airlines   "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"1-01-2022       PKR-750        4:30 am        ISL/PAK            PIA"<<endl;
    cout<<"1-01-2022       QTR-101        6:30 am        ISL/pak            Qatar Airways"<<endl;
    cout<<"2-01-2022       QTR-155        11:30 pm       ISL/PAK            Qatar Airways"<<endl;
    cout<<"2-01-2022       EMR-801        5:30 pm        ISL/PAK            Emirates"<<endl;
    cout<<"3-01-2022       PKR-753        10:00 am       ISL/PAK            PIA"<<endl;
    cout<<"3-01-2022       EMR-831        9:00 pm        ISL/PAK            Emirates"<<endl;
    cout<<"4-01-2022       PKR-332        8:00 am        ISL/PAK            PIA"<<endl;
    cout<<"4-01-2022       QTR-201        7:00 pm        ISL/PAK            Qatar Airways"<<endl;
    cout<<"5-01-2022       EMR-807        10:30 pm       ISL/PAK            Emirates"<<endl;
    cout<<"5-01-2022       QTR-166        5:00 pm        ISL/PAK            Qatar Airways"<<endl;  
}
void england()
{
    cout<<"  Date          Flight          Time          Departure          Airlines   "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"3-01-2022       PKR-753        4:00 am        ISL/PAK            PIA"<<endl;
    cout<<"1-01-2022       QTR-111        6:30 am        ISL/pak            Qatar Airways"<<endl;
    cout<<"6-01-2022       QTR-151        12:30 pm       ISL/PAK            Qatar Airways"<<endl;
    cout<<"2-01-2022       EMR-800        5:30 pm        ISL/PAK            Emirates"<<endl;
    cout<<"3-01-2022       PKR-733        10:00 am       ISL/PAK            PIA"<<endl;
    cout<<"2-01-2022       EMR-831        2:00 pm        ISL/PAK            Emirates"<<endl;
    cout<<"6-01-2022       PKR-333        8:30 am        ISL/PAK            PIA"<<endl;
    cout<<"5-01-2022       QTR-211        7:00 pm        ISL/PAK            Qatar Airways"<<endl;
    cout<<"1-01-2022       EMR-817        10:30 pm       ISL/PAK            Emirates"<<endl;
    cout<<"4-01-2022       QTR-156        7:00 pm        ISL/PAK            Qatar Airways"<<endl;
}
void turkey()
{
 cout<<"  Date          Flight          Time          Departure          Airlines   "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"10-01-2022       PKR-753        4:00 am        ISL/PAK            PIA"<<endl;
    cout<<"11-01-2022       QTR-111        6:30 am        ISL/pak            Qatar Airways"<<endl;
    cout<<"16-01-2022       QTR-151        12:30 pm       ISL/PAK            Qatar Airways"<<endl;
    cout<<"12-01-2022       EMR-800        5:30 pm        ISL/PAK            Emirates"<<endl;
    cout<<"13-01-2022       PKR-733        10:00 am       ISL/PAK            PIA"<<endl;
    cout<<"12-01-2022       EMR-831        2:00 pm        ISL/PAK            Emirates"<<endl;
    cout<<"16-01-2022       PKR-333        8:30 am        ISL/PAK            PIA"<<endl;
    cout<<"15-01-2022       QTR-211        7:00 pm        ISL/PAK            Qatar Airways"<<endl;
    cout<<"10-01-2022       EMR-817        10:30 pm       ISL/PAK            Emirates"<<endl;
    cout<<"14-01-2022       QTR-156        7:00 pm        ISL/PAK            Qatar Airways"<<endl;   
}
void saudi()
{
 cout<<"  Date          Flight          Time          Departure          Airlines   "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"3-01-2022      PKR-755        4:00 am        ISL/PAK            PIA"<<endl;
    cout<<"1-01-2022       QTR-211        6:30 am        ISL/pak            Qatar Airways"<<endl;
    cout<<"6-01-2022       QTR-351        12:30 pm       ISL/PAK            Qatar Airways"<<endl;
    cout<<"2-01-2022       EMR-100        5:30 pm        ISL/PAK            Emirates"<<endl;
    cout<<"3-01-2022       PKR-633        10:00 am       ISL/PAK            PIA"<<endl;
    cout<<"2-01-2022       EMR-931        2:00 pm        ISL/PAK            Emirates"<<endl;
    cout<<"6-01-2022       PKR-433        8:30 am        ISL/PAK            PIA"<<endl;
    cout<<"5-01-2022       QTR-211        7:00 pm        ISL/PAK            Qatar Airways"<<endl;
    cout<<"1-01-2022       EMR-807        10:30 pm       ISL/PAK            Emirates"<<endl;
    cout<<"4-01-2022       QTR-556        7:00 pm        ISL/PAK            Qatar Airways"<<endl;   
}
int main()
{
    int a,b,c,d,e;
    string g,h,i,j,k,l,m,n,o,p,Q,r,s,t,u;
    welcome();
    menu();
    cin>>d;
    if(d==1)
    {
    options();
    cin>>a;
    if(a==1)
    {
    cout<<"1.For Dubai"<<endl;
    cout<<"2.For England"<<endl;
    cout<<"3.For Turkey"<<endl;
    cout<<"4.For Saudi Arabia"<<endl;
    cin>>b;
    if(b==1)
    {
    dubai();
    }
    else if(b==2)
    {
    england();
    }
    else if(b==3)
    {
    turkey();
    }
    else if(b==4)
    {
    saudi();
    }
    else
    {
    cout<<"invalid input"<<endl;
    }
    options();
    cin>>c;
    if(c==2)
    {
    cout<<"                 "<<endl;
    cout<<"**ENTER FLIGHT DETAILS**"<<endl;
    cout<<"                 "<<endl;
    cout<<"Enter yor Departure city"<<endl;
    cin>>k;
    cout<<"Enter destination"<<endl;
    cin>>l;
    cout<<"Enter the date"<<endl;
    cin>>m;
    cout<<"Enter month"<<endl;
    cin>>n;
    cout<<"enter year"<<endl;
    cin>>o;
    cout<<"                 "<<endl;
    cout<<"***** YOUR DETAILS HAVE BEEN SUBMITTED *****"<<endl;
    cout<<"                 "<<endl;
    cout<<"                 "<<endl;
    cout<<"Enter the following details to print your ticket"<<endl;
    cout<<"                 "<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<"                 "<<endl;
    cout<<"             Name : ";
    cin>>p;
    cout<<"             Cell : ";
    cin>>Q;
    cout<<"             Date(in digits with date and month only) : ";
    cin>>r;
    cout<<"             Passport Number : ";
    cin>>s;
    cout<<"             Destination : ";
    cin>>t;
    cout<<"             CNIC : ";
    cin>>u;
    cout<<"                 "<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<"                ";
    cout<<"YOUR TICKET HAS BEEN PRINTED"<<endl;
    cout<<"                 "<<endl;
    cout<<"                 "<<endl;
   
    cout<<"*******THANKYOU FOR USING OUR SEVICES*******"<<endl;
    }
    else if(c==3)
    {
        cout<<"  ";
    }
    else if(c==1)
    {
    cout<<"1.For Dubai"<<endl;
    cout<<"2.For England"<<endl;
    cout<<"3.For Turkey"<<endl;
    cout<<"4.For Saudi Arabia"<<endl;
    cin>>e;
     if(e==1)
    {
    dubai();
    }
    else if(e==2)
    {
    england();
    }
    else if(e==3)
    {
    turkey();
    }
    else if(e==4)
    {
    saudi();
    }
    else
    {
    cout<<"invalid input"<<endl;
    }
    
    }
    }
    else if(a==2)
    {
    cout<<"You cannot reserve ticket without seeing flight schedule"<<endl;;
    }
    else if(a==3)
    {
        cout<<endl;
    }
    else
    {
        cout<<"invalid input"<<endl;
    }
    }
    else if(d==2)
    {
        cout<<""<<endl;
    }
    return main();
    
    
    
    
    
}


