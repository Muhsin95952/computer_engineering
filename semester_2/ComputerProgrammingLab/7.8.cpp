#include <iostream>
using namespace std;

int power(int p, int n){
	
	if (n>0){
		p=p*power(p, n-1);
	 return p;	 	
	}
	else 
	return 1;	
}
main(){
	int p, n;
	cout<<"Enter a number ";
	cin>>p;
	cout<<"Enter power for the number ";
	cin>>n;
	cout<<power(p,n);	
}


