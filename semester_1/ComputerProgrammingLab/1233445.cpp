#include <iostream>
#define line cout<<endl;
using namespace std;
main(){
	
		int n; 
	cout<<"Enter size of the array.";
	line
	int num1[n];
	cin>>n;
	line 
	cout<<"Now give values to the array";
	line
	cout<<"INPUT ";
	for (int i=0; i<n; i++){
		cin>>num1[i];
		}
	 cout<<"The values in the revese order is ";
	 line 
	 cout<<"OUTPUT = ";
	 for (int i=(n-1); i>=0; i--){
	 		
	 		cout<<num1[i]<<",";	
	 }		
}
