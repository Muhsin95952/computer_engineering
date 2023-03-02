#include <iostream>
using namespace std;
#define l cout<<endl;

void average(int *p, int size){
  for (int i=0; i<5; i++){
  *p = *(p+i) + *p;
  	
  }
  	cout<<*p/size;
}
main(){
	int *p, size=5, sum=0;
	
	int arr[5];
	for (int i=0; i<5; i++)	{
		cout<<"array["<<i<<"] = ";
		cin>>arr[i];
	}	
	average(arr, 5);
	
}
