#include <iostream>
using namespace std;
main()
{	int nmber;
	cout<<"Enter a number n = ";
	cin>>nmber;
	cout<<"\nThe numbers from "<<nmber<<" to 1 in reverse order are: \n"<<endl;
	for (int i=nmber; i>=1; i--)
	{
		cout<<i<<"  ";
	}	
}
