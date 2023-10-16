#include <iostream>
using namespace std;

struct phone{
	int area_code;
	int exchange;
	int number;
	
}; 

main(){
	phone mynumber, yournumber;
	
	cout<<"Enter your area code, exchange and number "<<endl<<"Area code: ";
	cin>>yournumber.area_code;
	cout<<"\nExchange: ";
	cin>>yournumber.exchange;
	cout<<"\nNumber: ";
	cin>>yournumber.number;
	
	cout<<"\n My number is: ";
	mynumber.area_code = 061;
	mynumber.exchange = 667;
	mynumber.number = 1200;
	
	cout<<"(0"<<mynumber.area_code<<") ";      //cannot print zero before area code
	cout<<mynumber.exchange<<"-";
	cout<<mynumber.number<<endl;
		
	cout<<" Your number is: ";
	cout<<"(0"<<yournumber.area_code<<") ";      //cannot print zero before area code
	cout<<yournumber.exchange<<"-";
	cout<<yournumber.number;	
		
}
