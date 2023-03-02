#include <iostream>
using namespace std;

struct myflight
{
	int distination;
	int country;
	int main_menu;
	int user_op;
	int next_Us;
};
class my_flight
{
public:

void welcome()
	{
    cout<<"     **************************"<<endl;
    cout<<"          ||  WELCOME  ||       "<<endl;
    cout<<"          ||    TO     ||       "<<endl;
    cout<<"          ||   BLACK   ||       "<<endl;
    cout<<"          ||   NOMII   ||       "<<endl;
    cout<<"          ||  AIRLINE  ||       "<<endl;
    cout<<"          ||  BOOKING  ||       "<<endl;
    cout<<"          ||  SERVICE  ||       "<<endl;
    cout<<"     **************************"<<endl;
    cout<<"                                "<<endl;
    cout<<"          *** MAIN MENU ***     "<<endl;

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
    cout<<"3-01-2022       PKR-755        4:00 am        ISL/PAK            PIA"<<endl;
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
};

int  main()
{
    myflight flight;
    
    string data[12];
    my_flight F;
    my_flight F1;
    
    F.welcome();
    F.menu();
    
    cin>>flight.user_op;
    if(flight.user_op==1)
    {
    F.options();
    cin>>flight.distination;
    if(flight.distination==1)
    {
    cout<<"1.For Dubai"<<endl;
    cout<<"2.For England"<<endl;
    cout<<"3.For Turkey"<<endl;
    cout<<"4.For Saudi Arabia"<<endl;
    cin>>flight.country;
    if(flight.country==1)
    {
    F.dubai();
    }
   	  else if(flight.country==2)
      {
        F.england();
      }
         else if(flight.country==3)
       {
           F.turkey();
       }
          else if(flight.country==4)
         {
              F.saudi();
          }
        else
            {
              cout<<"invalid input"<<endl;
             }
             
    F.options();
    
    cin>>flight.main_menu;
    if(flight.main_menu==2)
    {
    cout<<"                 "<<endl;
    cout<<"**ENTER FLIGHT DETAILS**"<<endl;
    cout<<"                 "<<endl;
    cout<<"Enter yor Departure city"<<endl;
    cin>>data[0];
    cout<<"Enter destination"<<endl;
    cin>>data[1];
    cout<<"Enter the date"<<endl;
    cin>>data[2];
    cout<<"Enter month"<<endl;
    cin>>data[3];
    cout<<"enter year"<<endl;
    cin>>data[4];
    cout<<"                 "<<endl;
    cout<<"***** YOUR DETAILS HAVE BEEN SUBMITTED *****"<<endl;
    cout<<"                 "<<endl;
    cout<<"                 "<<endl;
    
    cout<<"Enter the following details to print your ticket"<<endl;
    cout<<"                 "<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<"                 "<<endl;
    cout<<"             Name : ";
    cin>>data[5];
    cout<<"             Cell : ";
    cin>>data[6];
    cout<<"             Date(in digits with date and month only) : ";
    cin>>data[7];
    cout<<"             Passport Number : ";
    cin>>data[8];
    cout<<"             Destination : ";
    cin>>data[9];
    cout<<"             CNIC : ";
    cin>>data[10];
    cout<<"                 "<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<"                ";
    cout<<"YOUR TICKET HAS BEEN PRINTED"<<endl;
    cout<<"                 "<<endl;
    cout<<"                 "<<endl;
    
    
    for (int i=0; i<10; i++)
	{
	cout<<"              "<<data[i]<<endl;
	}
   cout<<"\n\n\n ";
    cout<<"*******THANKYOU FOR USING OUR SEVICES*******\n\n\n"<<endl;
    }
    else if(flight.main_menu==3)
    {
        cout<<"  ";
    }
    else if(flight.main_menu==1)
    {
    	cout<<"1.For Dubai"<<endl;
    	cout<<"2.For England"<<endl;
    	cout<<"3.For Turkey"<<endl;
    	cout<<"4.For Saudi Arabia"<<endl;
    	cin>>flight.next_Us;
    if(flight.next_Us==1)
    {
   		F1.dubai();
    }
    else if(flight.next_Us==2)
    {
    	F1.england();
    }
    else if(flight.next_Us==3)
    {
    	F1.turkey();
    }
    else if(flight.next_Us==4)
    {
    	F1.saudi();
    }
    else
    {
    	cout<<"invalid input"<<endl;
    }
   }
 }
    else if(flight.distination==2)
    {
       cout<<"You cannot reserve ticket without seeing flight schedule"<<endl;
    }
    else if(flight.distination==3)
    {
        cout<<endl;
    }
    else
    {
        cout<<"invalid input"<<endl;
    }
    }
    else if(flight.user_op==2)
    {
        cout<<"      "<<endl;
    }
    return main();        
}


