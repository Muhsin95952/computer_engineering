#include <iostream>
using namespace std;
main()
{	int base, power, result=1;
	cout<<"Enter a number and power on that base number\nBase = ";
	cin>>base;
	cout<<"Power = ";
	cin>>power;
	for (int i=1; i<=power; i++)
	{
		result=result*base;
	}
	cout<<result;	
}
