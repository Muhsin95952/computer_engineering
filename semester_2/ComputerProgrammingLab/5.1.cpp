#include <iostream>
using namespace std;
 main()
 {	char name[11];
 	char reg_no[11];
 	cout<<"Enter your name "<<endl<<"NAME: ";
 	for (int i=0; i<10; i++){
 		cin>>name[i];	
	 }
	 cout<<endl<<"Enter your registration no"<<endl<<"REGISTRATION NO: ";
	 for(int i=0; i<11; i++){
	 	cin>>reg_no[i];
	 }
	 cout<<endl<<"Your name is "<<name<<endl;
	 cout<<"Your registration no is "<<reg_no<<endl;
	
 }
