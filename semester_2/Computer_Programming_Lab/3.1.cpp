#include <iostream>
using namespace std;
int main()
{	int x,y,z;
	cout<<"Enter three numbers \n First number: ";
	cin>>x;
	cout<<" Second number: ";
	cin>>y;
	cout<<" Third number: ";
	cin>>z;
	cout<<"Largest number among these is ";
	if (x>y && x>z)
	{
		cout<<"First number: "<<x;
	}
	else if (y>x && y>z)
	{	
		cout<<"Second number: "<<y;
	}
	else if (z>x && z>y)
	{
		cout<<"Third number: "<<z;
	}
	else
	 {	
	}	
 return 0;
}
