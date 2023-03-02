#include <iostream>
#include <math.h>
using namespace std;
int sum(int, int);
void check(int, int);

main(){
int a, b;
cout<<"enter the values"<<endl;
cin>>a>>b;

check(a,b);
	
}
void check(int x, int y){
	if (x!=0 || y!=0){
		cout<<"sum of the values is "<<sum(x,y)<<endl;
	}
	
}
int sum(int x, int y){
	return x + y;	
}



