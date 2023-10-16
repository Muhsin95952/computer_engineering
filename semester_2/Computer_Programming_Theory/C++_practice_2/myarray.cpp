#include <iostream>
using namespace std;
main(){
/*	int myarray[5]={2,4,6,8,10};
	int sum=0;
	int i=0;
	
	for (i=0; i<5; i++){
		
		cout<<"myarray["<<i<<"]="<<myarray[i]<<endl;
		
		sum=sum+myarray[i];
		
	
	}
	
		cout<<"sum= "<<sum;*/
		int x;
	
		cout<<"Enter a value for myarray\n";
		cin>>x;
			int myarray[x];
			
		int sum;
		int i=0;
		for(i=0; i<x; i++){
		
			cout<<"myarray["<<i<<"]=";
  			cin>>myarray[i];
		}
		for(myarray[x]=0; myarray[x]<i; x++){
		
			sum=sum+myarray[x];
		}
	cout<<myarray[i];	
}




