#include <iostream>
using namespace std;
main(){
	
	char name[6]={'M','u','h','s','i','n'};

	cout<<"name = "<<name<<endl;
	for(int i=0; i<6; i++)
	cout<<name[i]<<endl;
	

	string myname = "My name is Muhsin shah";
	cout<<myname.size();	  //use for finding number of char.
	
	
	string name1;
	cout<<"Enter your name"<<endl;
	getline(cin,name1);       // use for space in string.
	cout<<name1;
	
	
	name1.swap(myname);        // use for swping one string to another
	cout<<myname<<endl<<name1;
}
