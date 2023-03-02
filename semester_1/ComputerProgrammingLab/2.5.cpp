#include <iostream>
using namespace std;
 main(){
 	int x,y,z;
 	x=50;
 	y=100;
 	cout<<"x= "<<x<<"\ny= "<<y<<endl; 
 	
 	x=x*y;
 	y=x/y;
 	x=x/y;
 	cout<<endl<<"Swaping values without third variable\n";
 	cout<<"x= "<<x<<"\ny= "<<y<<endl<<endl;
 	
 	x=50;
 	y=100;
 	z=2;
 	x=x*z;
 	y=y/z;
 	cout<<"Swaping values using third variable "<<endl;
 	cout<<"x= "<<x<<"\ny= "<<y<<endl;
 	
 }
