#include <iostream>
using namespace std;

 struct rectan
 {
 	int width;
 	int height;
 	
 };
 
 int main()
 {
 	rectan hei, wid;
	 int array[30][20];
	 cout<<"Enter width of rectangle."<<endl;
 	cin>>wid.width;
 	cout<<"Enter height of rectangle."<<endl;
 	cin>>hei.height;
 	
 	for (int i=0; i<hei.height; i++)
	 {
 		for (int k=0; k<wid.width; k++)
		 {
 		cout<<"*  ";	
		 }
		 cout<<endl;
	 }	
 }
