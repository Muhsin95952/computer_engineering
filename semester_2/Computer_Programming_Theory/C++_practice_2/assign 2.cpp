#include <iostream>
using namespace std;
main()
{
	int myarray[6], largest;
	cout<<"Give values to the Array \n";
	for(int i=0; i<=5; i++)
	{
		cout<<"myarray["<<i<<"] = ";
		cin>>myarray[i];
	}	
	for (int i=0; i<=5 ;i++)
	{
		if (myarray[i]>largest)
		{
			largest=myarray[i];		
		}
	}	
	cout<<"\nLargest value in the given is = "<<largest<<endl;
		
		int smallest;
		smallest = myarray[0];
	for (int i=0; i<=5; i++)
	{
		if (myarray[i]<smallest)
		{
			smallest=myarray[i];	
		}
	}		
	cout<<"\nSmallest value = "<<smallest<<endl;

	int sec_smallest;
	sec_smallest = largest;

	for(int i=0; i<=5; i++)
 	{
 		if (myarray[i]!=smallest && myarray[i]<sec_smallest)
		{
 			sec_smallest=myarray[i];
	 	}		
	}
	 cout<<"\nSecond smallest value in the above is = "<<sec_smallest<<endl;		
}



