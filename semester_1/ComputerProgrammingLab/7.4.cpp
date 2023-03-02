#include <iostream>
using namespace std;
int odd(int x){
		int n=0;
	for(int i=0; i<x; i++){
	
	
	if(i%2!=0){
		n=n+i;		}	
}

	return n;	
}
main(){
	int x;
	cout<<"Enter a number ";
	cin>>x;
	cout<<"The sum of odd numbers from 1 to "<<x<<" is  = "<<odd(x);
		
}
