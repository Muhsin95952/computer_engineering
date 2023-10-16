#include <iostream>
using namespace std;
main(){
	int name=0;
	again:
	cout<<"enter a number\n";
	cin>>name;
	if ( name==2)
	{cout<<"Muhsin shah\n";
	}
	else{
		cout<<"wrong number\n";
	}
	goto again;
}
