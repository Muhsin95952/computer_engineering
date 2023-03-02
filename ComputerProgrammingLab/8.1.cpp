#include <iostream>
using namespace std;
 
 main(){
 	int val1, val2, sum;
 	cout<<"Enter two values below."<<endl<<"First Value = ";
 	cin>>val1;
 	cout<<"second value = ";
 	cin>>val2;
 	sum = val1 + val2;
 	
 	int *ptr = &sum;
 	
 	cout<<"Sum of given two values is = "<<*ptr;
 	
 }
