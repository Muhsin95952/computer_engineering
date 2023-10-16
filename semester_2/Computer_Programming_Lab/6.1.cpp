#include <iostream>
using namespace std;

 string name, reg_no;
 int marks, z;
 char x;
 
 void funct(string, string, char)
 {
	cout<<"Name: ";
	cin>>name;
	
	cout<<"Registration no: ";
	cin>>reg_no;
	
	cout<<"Marks: ";
	cin>>marks;

	if (marks>90)
		x='A';
	else if (marks>80)
		x='B';
	else if (marks>70)
		x= 'C';
	else if(marks>60)
		x= 'D';
	else
		x='F';	
 }
 
main(){
	
funct(name, reg_no, x);
cout<<"Name: "<<name<<endl<<"Registration no: "<<reg_no<<endl<<"Grade: "<<x<<endl;
	
} 
