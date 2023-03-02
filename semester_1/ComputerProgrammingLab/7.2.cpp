#include <iostream>
using namespace std;

static int sum(int x=5, int y=6){
	
	return x + y;	
}
main(){
	int x, y;
	cout<<"Enter two integers "<<endl;
	cin>>x>>y;
	if (y==0){
	cout<<sum(x, 6);
		}
		else if (x==0){
		cout<<sum(y, 5);
		}
		else {
		cout<<sum(x, y);
		}	
}
