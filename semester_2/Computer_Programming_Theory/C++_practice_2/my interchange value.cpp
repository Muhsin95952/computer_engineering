#include <iostream>
using namespace std;
main(){
	float x, y;
	cout<<"Enter two numbers\nx= ";
	cin>>x;
	cout<<"y= ";
	cin>>y;
	x=x/y;
	y=y*x;
	x=y/x;
	cout<<"values after interchange\nx= "<<x<<endl<<"y= "<<y;
	
	
}
