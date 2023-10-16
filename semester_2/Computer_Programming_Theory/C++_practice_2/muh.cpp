#include <iostream>
#include <math.h>
using namespace std;
int a, b, c, x, y,i,d, value;
int deter(int d){
	y = int value[3];
	if(a!=0){
		d=(b*b)-(4*a*c);	
	}
	cout<<"Determinent d ="<<d<<endl;
	return d;
}
void root(int r1, int r2, int r3){
x=deter(d);
	if(d>0){
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
	}
	else if (d=0){
		r1=r2=-b/2*a;
	}
	else{
		r1=-b/2*a;
		r3=sqrt(-d)/2*a;
	}
	cout<<"Real root r1 = "<<r1<<endl;
	cout<<"Real root r2 = "<<r2<<endl;
	cout<<"Imaginary root = "<<r3<<endl;
}

main(){
	cout<<"Enter values"<<endl;
	cin>>a>>b>>c;
	int value[3]={a, b, c};
	for(int i=0; i<3; i++){
		cout<<value[i]<<endl;
	}
	
	
}
