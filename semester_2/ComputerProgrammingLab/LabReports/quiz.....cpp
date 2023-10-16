#include <iostream>
using namespace std;
int main()
{
	cout<<"  1.Coffee  \n  2.Tea  \n  3.Coke  \n  4.Orange juice\n";
	
	int a=0, b=0, c=0, d=0, x, y=0, z=0;
	
	cout<<"\nChoose 1, 2, 3, or 4 from the above menu or -1 to exit the program\n\n"<<endl;
	
	do{
		y++;
		cout<<"Input the favorite beverage of person#"<<y<<": ";
		cin>>x;
		if (x==1){
			a++;
		}	
		else if (x==2){
			b++;
		}
		else if (x==3){
			c++;
		}
		else if (x==4){
			d++;
  }
  else
    {
    z++;
    }
		
		
	}while(x!=-1);
	cout<<"\n\n\n\n\n   Beverages               Votes"<<"\n";
	cout<<"   _____________________________"<<"\n";
	cout<<"   1 Coffee                   "<<a<<"\n";
	cout<<"   2 Tea                      "<<b<<"\n";
	cout<<"   3 Coke                     "<<c<<"\n";
	cout<<"   4 Orange Juice             "<<d<<"\n";
 cout<<"   5 Discarded votes          "<<z<<"\n";
	}	
