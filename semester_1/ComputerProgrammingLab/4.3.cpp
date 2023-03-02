#include <iostream>
using namespace std;
main(){
	int i, number, factorial=1;
	cout<<"Enter a number to find factorial of that number "<<endl;
	cin>>number;
	for (i=number; i>=1; i--)
	{
	factorial*=i;
	}	
	cout<<"Factorial of "<<number<<" is = "<<factorial<<endl;	
}
