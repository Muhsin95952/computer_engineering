#include <iostream>
using namespace std;
main(){
	int x = 0, coffee = 0, tea = 0, coke = 0, orange = 0;
	cout<<"\n\t\t\t 1= Coffee \t 2= Tea \t 3= Coke \t 4= Orange Juice"<<endl;	
	while(1){
		cout<<"\n\t\t Please enter your favorite beaverage: Choose 1,2,3 or 4 from above menue\n\t\t OR enter -1 to exist the program"<<endl;
	    cout<<"\n\t\t";
		cin>>x;
		if(x== 1){
			coffee++;
		}
		else if(x== 2){
			tea++;
		}
		else if(x== 3){
			coke++;
		}
		else if (x== 4){
			orange++;
		}
		if(x== -1){
			break;
		}		   
	}
	cout<<endl;	
	cout<<"Beaverage                                                                       Votes:"<<endl;
	cout<<"______________________________________________________________________________________________________"<<endl;
	cout<<"COFFEE                                                                           = "<<coffee<<endl;
	cout<<"TEA                                                                              = "<<tea<<endl;
	cout<<"COKE                                                                             = "<<coke<<endl;
	cout<<"ORANGE JUICE                                                                     = "<<orange<<endl;
	cout<<"_______________________________________________________________________________________________________"<<endl;
	cout<<"TOTAL NUMBER OF PEOPLE SURVEYED IS                                               = "<<coffee+tea+coke+orange<<endl;
    cout<<endl;
}
