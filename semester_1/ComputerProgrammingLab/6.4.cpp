#include <iostream>
using namespace std;

	int myfact(int n)
	{
		int factorial = 1;
		for(int i=n; i>=1; --i){
		factorial*=i;
	}
	return factorial;	
}
main()
{	int n;

	cout<<"Enter an integer = ";
	cin>>n;
   cout<<"factorial of "<<n<<" is "<<myfact(n);			
}
