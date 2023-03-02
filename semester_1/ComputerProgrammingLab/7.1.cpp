#include <iostream>
using namespace std;
int name(int n){
	if(n<11){
		cout<<n<<" Name: Muhsin shah\n Reg no:21PWCSE2018"<<endl<<endl;
		n++;
		name(n);
	}
	else {
		exit (0);
	}	
}
main(){
	name(1);
}



