#include <iostream>
#define line cout<<endl;
using namespace std;
int func(int *x, int *y){
	
}
main(){
	int array[5];
	int *as, qw;
	int *zx;
	int *asd;
	asd = array;
	 for (int i=0; i<5; i++){
	 	cout<<"Array["<<i<<"] = ";
	 	cin>>*(asd+i);
	 }
	 line
	 cout<<"Integer 1 = ";
	cin>>*as;
	line
	*zx = *(asd)+(*as);
	cout<<"Integer 2 = ";

	line
cout<<*zx;
	
}
