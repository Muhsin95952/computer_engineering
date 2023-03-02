#include <iostream>
using namespace std;
main(){
	
	int value[10];
	int *w;
	w = value;
	cout<<"Enter 10 values to the array. "<<endl;
	
	for (int i=0; i<10; i++){
		cin>>*(w+i);	
	} 
	
	for (int i=0; i<10; i++){
		cout<<"Array["<<i<<"] = "<<*(w + i)<<endl;
	}		
}
