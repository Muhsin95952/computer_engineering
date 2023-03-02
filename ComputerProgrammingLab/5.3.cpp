#include <iostream>
#define line cout<<endl;
using namespace std;
main()
{	int values[10];
	float sum=0; 
	float average;
	
	cout<<"Give values to the array ";
	line
	for(int i=0; i<10; i++){
		cout<<"values["<<i<<"] = ";
		cin>>values[i];
	}
		for(int i=0; i<10; i++){
		sum= sum+values[i];		
	}
	cout<<"Sum of the given values is = "<<sum;
	average= sum/10;
	line line
	cout<<"Average of the given values is:";
	line line
	cout<<"Average = "<<sum<<"/10 = "<<average;
	line	
}
