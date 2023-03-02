#include <iostream>
using namespace std;
  
  int prime(int n){
  	bool z = true;
  	if(n==0 || n==1){
  		z = false;
	  }
  		for(int i=2; i<=n/2; ++i)
		{
  			if (n%i==0){
  			z = false;
		}
  		else 
  		z = true;
	  }
  	cout<<z;
  }
  main()
  {
  	int n;
  	cout<<"Enter a an integer = ";
  	cin>>n;
  	prime(n);	
  }
  
