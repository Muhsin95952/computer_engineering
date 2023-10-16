#include <iostream>
using namespace std;
main(){
	int array[10];
	int z;
	cout<<"Enter values to the array\n";
	for (int i=0; i<10; i++){
		cout<<"array["<<i<<"] = ";
		cin>>array[i];	
	}
	cout<<"Enter a key number: ";
	cin>>z;
	cout<<"number stored with index number "<<z<<" in the array is: ";
	for (int j=0; j<10; j++){
		if (j==z)
			cout<<array[j];
			else ;
	}	
};

