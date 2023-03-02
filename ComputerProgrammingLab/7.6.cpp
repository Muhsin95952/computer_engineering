#include <iostream>
using namespace std;
int factorial(int f){
	if (f>1){
		return f*factorial(f-1);
	}
	else return 1;
	
}
main(){
	int f;
	cout<<"Enter a number to find factorial  ";
	cin>>f;
	cout<<"factorial of "<<f<<"!  "<<factorial(f)<<endl;
		
}
