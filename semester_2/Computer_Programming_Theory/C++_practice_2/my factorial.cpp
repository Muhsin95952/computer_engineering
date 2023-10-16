#include <iostream>
using namespace std;
main(){
int i, factorial=1, number;

cout<<"\nEnter a number = ";
cin>>number;
for (i=1; i<=number; ++i){
	factorial = factorial*i;
}
	cout<<factorial;
	
	
}
