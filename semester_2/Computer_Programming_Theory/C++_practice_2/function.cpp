#include <iostream>
using namespace std;

// void add(int, int);
/*
void add(int x, int y){	
int result;	
	result = x+y;
	cout<<result;
//cout<<result;	
}
main(){
	int x, y;
	
	cin>>x>>y;
	add(x,y);	
}
*/
int are(int x, int y){
	int result;
	result=x*y;

	return result;
}
main(){
	int x, y;
	cin>>x>>y;
	cout<<are(x, y);
		
}
