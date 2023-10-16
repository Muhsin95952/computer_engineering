#include <iostream>
using namespace std;

int minmax(int w, int x, int y, int z)
{	int max, min;
 	max=w;
 	if(x>max)
 	max=x;
 	if(y>max)
 	max=y;
 	if(z>max)
 	max=z;
 
	cout<<"Maximum = "<<max<<endl;
	min=w;
 	if(x<min)
 	min=x;
 	if(y<min)
 	min=y;
 	if(z<min)
 	min=z;
	
	cout<<"Minimum = "<<min<<endl;	
}

int main()
{	int a, w, x, y, z;
	cout<<"Enter 4 different numbers"<<endl;
 	cin>>w>>x>>y>>z;
	minmax(w, x, y, z);
	
	return 0;
}
