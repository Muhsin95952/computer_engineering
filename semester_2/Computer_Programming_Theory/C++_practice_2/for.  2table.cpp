#include <iostream>
using namespace std;
main()
{
	again:
	int x;
	cin>>x;
	cout<<endl;
	for (int i=1; i<=50; i++)
	{
		cout<<x<<" x "<<i<<" = "<<x*i<<endl;
	}
	goto again;	
}
