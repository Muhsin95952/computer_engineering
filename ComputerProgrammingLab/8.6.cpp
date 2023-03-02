#include <iostream>
#define line cout<<endl;
using namespace std;
main(){
	int n, sum;
	cout<<"Enter a number = ";
	cin>>n;
	int *pointer;         //pointer
	pointer =&n;
	cout<<"Even numbers from 1 to "<<*pointer<<" is ";
	line
	line
	for(int i=1; i<=*pointer; i++){
		if (i%2==0){
			cout<<i<<",";		
		sum= sum+i;			
	}
}
	line 
	line
	cout<<"Sum of the even numbers from 1 to "<<*pointer<<" is = ";
	cout<<sum;		
}
