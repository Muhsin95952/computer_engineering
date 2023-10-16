#include <iostream>
using namespace std;
main(){
	int i, table=0;
	cout<<"Enter a number to find the table"<<endl;
	cin>>table;
	for (i=1; i<=10; i++)
	{
		cout<<table<<"x"<<i<<"="<<i*table<<endl;
	}	
}
