 #include <iostream>
using namespace std;

void sort4(int a, int b, int c, int d){
	
	int arr[4] = {a, b, c, d};
	
	for (int i=0; i<3; i++){
		for (int j=i+1; j<4; j++){
			if (arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;				
			}	
		}
	}
	for (int i=0; i<=3; i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int w, x, y, z;
	cout<<"Enter four numbers"<<endl;
	cin>>w>>x>>y>>z;
	cout<<"your numbers after Sorting"<<endl;

	sort4(w, x, y, z);
	return 0;
}
