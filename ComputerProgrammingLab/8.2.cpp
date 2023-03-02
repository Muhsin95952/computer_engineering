#include <iostream>
using namespace std;
main(){
	int val1, val2;
	cout<<"please Enter two integers "<<endl; 
	
	cout<<"Integer 1 = ";
	cin>>val1;
	cout<<"Integer 2 = ";
	cin>>val2;
	
	int *ptr1 = &val1;
	int *ptr2 = &val2;
	cout<<"Values before swaping."<<endl<<"Integer 1 = "<<*ptr1<<endl<<"Integer 2 = "<<*ptr2<<endl;
	
 	int z = *ptr1;
 	*ptr1 = *ptr2;
	*ptr2 = z;
	
	cout<<"values after swaping."<<endl<<"integer 1 = "<<*ptr1<<endl<<"Integer 2 = "<<*ptr2<<endl;	
}
