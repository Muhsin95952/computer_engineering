#include <iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	 int arra[n];
	 for (int i=0; i<n; i++){
	 	cout<<"arra["<<i<<"] = ";
	 	cin>>arra[i];
	 	
	 }
	
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (arra[j]<arra[i]){
				int temp = arra[j];
				arra[j] = arra[i];
				arra[i] = temp;
				
			}	
		}
	}
	
	for (int i=0; i<n; i++){
		cout<<arra[i]<<endl;
	}	
}


