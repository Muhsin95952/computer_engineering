#include <iostream>
using namespace std;

void sort4(int *a, int *b, int *c, int *d){

	int n =4, tem, arr[n]={*a, *b, *c, *d};
	for(int i = 0; i<(n-1); i++){
		for(int j=(i+1); j<n; j++ ){
			if(arr[j]<arr[i]){
				tem = arr[j];
				arr[j] = arr[i];
				arr[i] = tem;
			}	
		}
	}
		for(int i= 0; i<n; i++){
		cout<<arr[i]<<"   ";}
}

int main(){
	int w, x, y, z;
	cin>>w>>x>>y>>z;
	cout<<"sorting______"<<endl;
	sort4(&w, &x, &y, &z);
	

return 0;	
} 
