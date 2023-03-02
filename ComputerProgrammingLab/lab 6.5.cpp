#include <iostream>
#include <math.h>
using namespace std;

int a,b,c;
void root(int);
int deter();

main(){
	int d;
	cout<<"Please give values to the co-efficient quadratic equation"<<endl<<"value of a = ";
     cin>>a;
     cout<<"value of b = ";
	cin>>b;
	cout<<"value of c = ";
	cin>>c;	
    
    if (a!=0){
	d = deter(); 
	roots(d);
}else{
	
}
    
	}
  
int deter(){

    int d;
    d = (b*b) - (4*a*c);
	return d;
}
void root(int d){
    
	if (d>0){
		r1 = (-b + sqrt(d)/(2*a));
		r2 =  (-b + sqrt(d)/(2*a));	
		cout<<"roots are real "<<"Root r1 = "<<r1<<endl<<"Root r2 = "<<r2<<endl;
	}
	else if (d==0){
		r1 = -b/(2*a);
		r2=r2;
		cout<<"Roots are real and equal "<<"Root r1 = "<<r1<<endl<<"Root r2 = "<<r2<<endl;
		
	}
	else{
		r1 = -b/(2*a);
		r2 = sqrt(d)/(2*a);
		cout<<"real root = "<<r1<<endl;
		cout<<"imaginary root = "<<r2<<endl;
	}

	
}


