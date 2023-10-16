#include <iostream>
using namespace std;
void gcd(int x, int y)
{
	int i,gcd;
	for(i=2;i<=x&&i<=y;i++)
	{
		if(x%i==0&&y%i==0)
		{
			gcd=i;
		}
	}
	if(y==0)
	cout<<"GCD of "<<x<<" is: "<<gcd;
	else
	cout<<"GCD of "<<x<<" and "<<y<<" is: "<<gcd;
}
int main()
{
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;

     gcd(x,y);
	
	return 0;
	
}
