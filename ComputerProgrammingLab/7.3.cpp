#include <iostream>
using namespace std;
int sum(int x)
{	int n;
	if (x!=0){
    n=x+sum(x-1);
    
	return n;
	}
}

main(){
	int x;
	cout<<"Enter a valve for addition = ";
	cin>>x;
	cout<<"Sum of natural numbers from 1 to "<<x<<" = "<<sum(x);
	
}
