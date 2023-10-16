#include <iostream>
#define line cout<<endl;
using namespace std;
main(){
	int value[30];
	for(int i=0; i<12; i++){
		cout<<"value["<<i<<"] = ";
		cin>>value[i];
	}
	line
	cout<<"OUTPUT IS ------------------------";
	line line
	for (int i=0; i<=2; i++){
	cout<<"value "<<i+1<<"= "<<value[i]<<"    ";
	}
	line
		for (int i=3; i<=5; i++){
	cout<<"value "<<i+1<<"= "<<value[i]<<"    ";
	}
	line
		for (int i=6; i<=8; i++){
	cout<<"value "<<i+1<<"= "<<value[i]<<"    ";
	}
	line
		for (int i=9; i<=11; i++){
	cout<<"value "<<i+1<<"= "<<value[i]<<"   ";
	}
	line
		
}
