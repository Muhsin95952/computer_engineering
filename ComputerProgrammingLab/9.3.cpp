#include <iostream>
#define line cout<<endl;
using namespace std;
main(){
	 string array[2];
	 string *ptr, *qtr;
	 ptr = &array[0];
	 cout<<"Enter your name ";
	 line
	 getline(cin, *ptr);
	line
	  qtr = &array[1];
	  
	 cout<<"Enter your registration no ";
	 line
	 getline(cin, *qtr);
	  cout<<"your name is:"<<*ptr;
	 line line
	 cout<<"your Rrgistration no is:"<<*qtr;
	 line
		
}  
