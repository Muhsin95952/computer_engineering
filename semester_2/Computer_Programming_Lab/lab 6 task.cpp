#include <iostream>
#include <math.h>
using namespace std;
void root();
int values[3];
main(){
	root();
	
}
void root(){
	int values[3];
	int i,d,a,b,c,r1,r2,r3,r4;
	cout<<"Enter values"<<endl;
	for (i=0; i<3; i++){
		cout<<"Enter value["<<i<<"] is\n";
		cin>>values[i];
	}
	cout<<"value of arry"<<endl;
	a=values[0];
	b=values[1];
	c=values[2];
	cout<<"value of a is "<<a<<endl;
		cout<<"value of b is "<<b<<endl;
			cout<<"value of c is "<<c<<endl;
	d=b*b-4*a*c;
	cout<<"value of deter is "<<d<<endl;
	
	if (d==0){
		
		cout<<-b/(2*2);
	}		
	else if (d>0){
		r1=(-b+sqrt(d)/(2*2));
		r2=(-b+sqrt(d)/(2*2));
		cout<<r1<<endl<<r2;
			
	}
	else {
		
		r3 =(-b/(2*2));
		r4 =(sqrt(-d)/(2*2));
		cout<<"\nThe root is "<<r3<<endl;
	}	
}
