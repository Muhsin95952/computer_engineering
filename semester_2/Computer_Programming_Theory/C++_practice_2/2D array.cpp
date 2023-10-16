#include <iostream>
using namespace std;
main(){
	
	int x[2][5]= { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10} };
	
	int row, column;
	
	for (row=0; row<2; row++){
		cout<<endl;
		for (column=0; column<5; column++){
			
			cout<<x[row][column];
		}	
	}	
}
