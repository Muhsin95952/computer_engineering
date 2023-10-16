#include <iostream>
using namespace std;
main(){
	cout<<"1.  Coffee\n2.  Tea\n3.  Coke\n4.  Orenge juice\n";
	int x, h, i, j, k;
	labelf:
	cout<<"Enter a value"<<endl;
	cin>>x;
	if(x==1) {
		goto labela;
	}
	else if (x==2){goto labelb;
	}
	else if (x==3){goto labelc;
	}
	else if (x==4){goto labeld;
	}
	else if (x==-1){
		cout<<"stop";
	} 
	else if (x!=1 || x!=2 || x!=3 || x!=4){
		cout<<"Invalid number!.....";
	}	
	else { 
	}
	labela:
		cout<<"Please inout the beverage of person #1: choose 1,2,3,or 4from the above menu or -1 to exit the program"<<endl;
		goto labelf;
	labelb:
		cout<<"Please inout the beverage of person #1: choose 1,2,3,or 4from the above menu or -1 to exit the program"<<endl;
		goto labelf;	
	labelc:
		cout<<"Please inout the beverage of person #1: choose 1,2,3,or 4from the above menu or -1 to exit the program"<<endl;
		goto labelf;	
	labeld:
		cout<<"Please inout the beverage of person #1: choose 1,2,3,or 4from the above menu or -1 to exit the program"<<endl;
		goto labelf;	
	if (x==-1){		
	cout<<"Result:"<<endl;
	cout<<"coffee: "<<h<<endl;		}		}
