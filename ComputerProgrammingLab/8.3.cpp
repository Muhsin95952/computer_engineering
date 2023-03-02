#include <iostream>
using namespace std;
main(){
	int val1, m;
	cout<<"Enter an integer."<<endl<<"integer = ";
	cin>>val1;
	
	int *qtr;
	qtr = &val1; 
	
	cout<<*qtr<<endl;
	
	for (int i=0; i<5; i++){
		m=++(*qtr);	
		cout<<m<<endl;
	}
	cout<<endl<<"value incremented by 5 is "<<m;
}
