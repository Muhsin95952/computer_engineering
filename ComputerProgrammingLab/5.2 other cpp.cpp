#include <iostream>
#define line cout<<endl;
using namespace std;

main(){
	
	 int value1[15][15], row, column;
	 cout<<"Enter the number of rows and column ";
	 line
	 cin>>column;
	 cin>>row;
	 line 
	 cout<<"Now give values to the rows and column";
	 line 
	 for(int i=0; i<column; i++){
	 	
	 	for(int x=0; x<row; x++){
	 		
	 		cin>>value1[column][row];
	 		
		 }	
	 }     
	        
			cout<<"OUTPUT  is ";
			line
			for(int i=0; i<column; i++){
				
				for(int x=0; x<row; x++){
					
					cout<<value1[column][row]<<"    ";
					
				}
				line
			}    
	            
}
