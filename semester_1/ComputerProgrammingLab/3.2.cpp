#include <iostream>
using namespace std;
int main()
{	int x;
	cout<<"Enter a number ";
	cin>>x;
	if(x>0)
	{
		if(x%2==0)
	{
		cout<<"The given Number is even";
	}
	else 
	{
		cout<<"The given Number is odd";
	}
	}
	else if (x<0)
	{ 
	cout<<"The given Number is negative";
	}
	else 
	{
		cout<<"The given Number is zero";
	}
	return 0;
}
