#include <iostream>
using namespace std;
main(){
	int num1, num2, sum;
	cout<<"Enter two numbers \n1st number: ";
	cin>>num1;
	cout<<"2nd number: ";
	cin>>num2;
	for (int i=num1; i<=num2; i++)
	{	if (i%2==0)
		{
			sum = sum+i;
		}
	}
	cout<<"Sum of the even numbers is = "<<sum;			
}
