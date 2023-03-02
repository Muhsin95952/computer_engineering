#include <iostream>
using namespace std;
/*

template <class muhsin>
muhsin shah(muhsin y, muhsin x){
	return y*x;  	
}   */

void rec(int x){
	if(x>0){
	cout<<"sange ee?"<<endl;
	x--;
	rec(x);
	}
else 
cout<<"za kha yam"<<endl;	
}

main(){	
//cout<<shah(5,5);	

rec(6);

	
}
