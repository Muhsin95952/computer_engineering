#include <iostream>
#define line cout<<endl;
using namespace std;
 main(){
 	int array[12];
 	int *q;
 	q = array;
 	cout<<"Enter 12 values to the Array. "; 
	 line line
 	for (int i=0; i<12; i++){
 		cout<<"Array["<<i<<"] = ";
 		cin>>*(q+i);
	 }			 line
	 cout<<"OUTPUT of the Array in the required form is below."; 
	 line		 line 
	 for (int a=0; a<=2; a++){
	 	cout<<"Value "<<a+1<<" = "<<*(q+a)<<"     ";
	 }			line
 	 for (int b=3; b<=5; b++){
	 	cout<<"Value "<<b+1<<" = "<<*(q+b)<<"     ";
	 }			 line
	  for (int c=6; c<=8; c++){
	 	cout<<"Value "<<c+1<<" = "<<*(q+c)<<"     ";
	 }			 line
	  for (int d=9; d<=11; d++){
	 	cout<<"Value "<<d+1<<" = "<<*(q+d)<<"   ";
	 } 			 line	 
 }
