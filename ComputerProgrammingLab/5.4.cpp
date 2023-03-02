#include <iostream>
#define line cout<<endl;
using namespace std;
main()
{	int value[8];
	int maxi=0;
	
	cout<<"Give values to the array";
	line 
	for (int i=0; i<8; i++)
	{
		cout<<"value["<<i<<"] = ";
		cin>>value[i];	
	} 
	 	maxi = value[0];
		for(int i=0; i<8; i++)
	{
		if (maxi<value[i])
		maxi=value[i];
	}
	cout<<"maximum = "<<maxi;		
}
