#include <iostream>
using namespace std;

struct r{
	float ratings;
	 
	
};
 struct movies{
 	
 	string title;
 	int year;
 	r rate;     // here r is object
 	
 		
 };
  void display(movies m[3]);

 main(){
 	movies arr[3];
 	for (int i=0; i<3; i++){
 		cout<<"Enter movies title: ";
 		cin>>arr[i].title;;
 		cout<<endl<<"Enter releas date: ";
 		cin>>arr[i].year;
 		cout<<endl<<"Enter ratings: ";
 		cin>>arr[i].rate.ratings;
 		cout<<endl;
 		
 	//	cout<<endl<<arr[i].rate.ratings;
 	
	 }
 		display(arr);	
 }
 
 void display(movies m[3]){
 	for (int i=0; i<3; i++){
 		cout<<m[i].title<<endl;
 		cout<<m[i].year<<endl;
 		cout<<m[i].rate.ratings<<endl;
	 }
 	
 }
 
 
 
 
 
 
