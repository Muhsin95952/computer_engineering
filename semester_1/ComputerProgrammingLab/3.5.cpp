#include <iostream>
using namespace std;
main()
{	int nmber=0;
	cout<<"Enter a two digit number"<<endl;
	cin>>nmber;
	if (nmber%5==0)
	{
		cout<<"The number is multiple of 5"<<endl;
	}
	else
	 {
		cout<<"The numbe is not the multiple of 5"<<endl;
	}
	if(nmber%7==0)
	{
	cout<<"The number is divisible by 7"<<endl;
	}
	else
	 {
		cout<<"The number is not divisible by 7"<<endl;
	}
	if (nmber%11!=0)
	{
		cout<<"The number is not divisible by 11"<<endl;
	}	
}
