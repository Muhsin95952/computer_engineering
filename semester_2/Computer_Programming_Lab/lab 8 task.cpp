#include <iostream>
#define l cout<<endl;
using namespace std;
main(){
	string name, reg_no;
	cout<<"Enter your name: ";
	cin>>name;
	l
	cout<<"Enter yout Reg No: ";
	cin>>reg_no;
	string *m;
	m = &name;
	cout<<*m<<endl;
	m=&reg_no;
	cout<<*m<<endl;	
	
}
