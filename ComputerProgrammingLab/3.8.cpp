#include <iostream>
using namespace std;
int main()
{	int x,a;
	cout<<"Enter a number from 1 to 12: ";
	cin>>x;
	cout<<endl;
	if (x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
	{		a=31;
		cout<<"Number of days in this month are: "<<a;
	}
		else if (x==4 || x==6 || x==9 || x==11)
		{	a=30;
			cout<<"Number of days in this month are: "<<a;
		}
		else if (x==2)
		{	a=28;
		cout<<"Number of days in this month are: "<<a;	
		}
		else {
			cout<<"wrong number ";
		}
	}
