#include <iostream>
using namespace std;
#define l cout<<endl;

void sum(int *p, int *q){
*p=*p+*q;

p=0;
}

main(){       //  pointer with array[]  and functions()

int a, b;
cin>>a>>b;
cout<<a<<endl<<b;
l
sum(&a, &b);
cout<<"sum = "<<a;
























/*                              pointers with array[]
int arr[5]={1,2,3,4,5};
int *p;
p=arr;
cout<<*p;
l
*p=10;
cout<<&p;
l
p++;
cout<<*p;
l
//p=&arr[2];
//cout<<*p;
l
*p=20;
cout<<*p;
l
//cout<<arr[0]<<endl<<arr[1]<<endl<<arr[3];
l

p=arr+3;
*p=30;
cout<<*p;
l
*p=40;
p=arr;
*(p+4)=50;      //offset operators

l
p=arr+4;
cout<<*p;
l
cout<<arr[4];
l	
	cout<<arr[3];
	l
	cout<<arr[2];
	
	l
	cout<<arr[1];
	l
	cout<<arr[0];   
	l
p= arr;
for (int i=0; i<5; i++){
	cout<<*(p+i)<<endl;
	
}	
	*/	
}




