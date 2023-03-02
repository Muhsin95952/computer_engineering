#include <iostream>
#define line cout<<endl;
using namespace std;

int addition(int a, int b){
	int sum;

	sum=a+b;
	
	return sum;
}
int subtract(int a, int b){
		int subt;

	subt=a-b;
	
	return subt;
	
}
int multiply(int a, int b){
		int multi;

	multi=a*b;
	
	return multi;
	
}
int divide(int a, int b){
		int divi;

	divi=a/b;
		return divi;
}
int calculator(int){
	int z;
	
	int integer1, integer2;
	char operat;
	cout<<"Enter two integers ";
	line
	cout<<"Integer 1 = ";
	cin>>integer1;
	cout<<"Integer 2 = ";
	cin>>integer2;
	cout<<"Enter a an operater (i.e +, -, /, *) = ";
	cin>>operat;
	
	switch(operat){
		case '+':{
			z = addition(integer1, integer2);
			break;
		}
		case '-':{
			z = subtract(integer1, integer2);
			break;
		}
		case '*':{
			z = multiply(integer1, integer2);
			break;
		}
		case '/':{
			z = divide(integer1, integer2);
			break;
		}
		default:{
			cout<<"try again with correct operator "<<endl;
			break;
		}
		}
	return z;
	}

main(){
	int x;
	calculator(x);
	cout<<calculator(x);	
}
