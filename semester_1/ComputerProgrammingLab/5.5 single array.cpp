#include <iostream>
#define line cout<<endl;
using namespace std;
main(){              //  USING SINGLE ARRAY
	int array1[6];
	int array2[6];
	int array3[6];
	cout<<"Enter numbers to the fisrt array";
	line 
	for (int i=0; i<6; i++){
		cout<<"array1["<<i<<"] = ";
		cin>>array1[i];
		line
	}
	cout<<"Enter numbers to the second array";
	line 
	for (int i=0; i<6; i++){
		cout<<"array2["<<i<<"] = ";
		cin>>array2[i];
		line
	}
	for (int i=0; i<6; i++){
		array3[i] = array1[i]+array2[i];	
	}
	cout<<"Addition of the array1 and array2 (element by element) is ";
	line
		for (int i=0; i<6; i++){
		cout<<array1[i]<<" + "<<array2[i]<<" = "<<array3[i];
	line
	}	
}
