#include <iostream>
using namespace std;
main()
{	float num1, num2, result;
	char a;
	cout<<"Enter two integers for calculation\n 1nst integer = ";
	cin>>num1;
	cout<<"2nd integer = ";
	cin>>num2;
	cout<<"Enter a operation for calculation \n";
	cin>>a;
	switch(a){
	
		case '+':
			cout<<"Addition: "<<num1+num2;
			break;
		case '-':
			cout<<"subtraction: "<<num1-num2;
			break;
		case '*':
			cout<<"Multiplication: "<<num1*num2;
			break;
		case '/':
			cout<<"Division: "<<num1/num2;
			break;
		default:
		cout<<"Enter correct statement"<<endl;
	}
}
