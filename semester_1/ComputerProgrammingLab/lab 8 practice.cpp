#include <iostream>
#define l cout<<endl;
using namespace std;

main(){	
	int x = 1;
	cout<<&x;
	l
	int *p;
p=&x;
cout<<p;
l
cout<<*p;
int *q=&x;
l
cout<<&x;
l
cout<<p;
l
cout<<q;
*q+=1;
l
cout<<x;
l
cout<<*p;
l
cout<<*q;
l
cout<<(*p)++;
l
cout<<*p;
l
cout<<p;
l
cout<<&x;
l
cout<<++(*p);
l
cout<<*p;
l
cout<<p;
l
cout<<&x;

const y = 10;
y++;
	
}
