#include <iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter a number "<<endl;
	cin>>n;
	cout<<"Numbers from 1 to "<<n<<" is "<<endl;
	int *a;
	a = &n ;
	
	for(int i=1; i<=*a; i++){
		cout<<i<<endl;	
	}	
}
