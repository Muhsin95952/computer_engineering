#include <iostream>
using namespace std;
int main(){
	float id, unit, surcharge, total;
	cout<<"Enter id: "<<endl;
	cin>>id;
	cout<<"Enter unit: "<<endl;
	cin>>unit;
	
	if (unit<200){
		cout<<"customer ID No: ";
		cout<<id<<endl;
		unit= unit*1.20;
		cout<<"Amount of charges @ 1.20 per unit is: ";
		cout<<unit<<endl;
		surcharge=unit*0.15;
		cout<<"surcharge:";
		cout<<surcharge<<endl;
		cout<<"total amount paid: ";
		total=surcharge+unit;
		cout<<total;	
        }
        
	 else if (unit<400){
	 		cout<<"customer ID No: ";
		    cout<<id<<endl;
		    unit= unit*1.50;
		    cout<<"Amount of charges @1.50 per unit is: ";
		    cout<<unit<<endl;
			surcharge=unit*0.15;
			cout<<"surcharge:";
		    cout<<surcharge<<endl;
		    cout<<"total amount paid: ";
		    total=surcharge+unit;
		    cout<<total;	
	     }	
		else if (unit<600){	cout<<"customer ID No: ";
		    cout<<id<<endl;
			unit=unit*1.80;
			cout<<"Amount of  charges @1.80 per unit is: ";
			cout<<unit<<endl;
			surcharge=unit*0.15;
			cout<<"surcharge:";
		    cout<<surcharge<<endl;
		    cout<<"total amount paid: ";
		    total=surcharge+unit;
		    cout<<total;	
		  }
		  
	else if(unit>=600){
		    cout<<"customer ID No: ";
	     	cout<<id<<endl;
		    unit=unit*2.00;
		    cout<<"Amount of charges @2.00 per unit is: ";
		    cout<<unit<<endl;
		    surcharge=unit*0.15;
		    cout<<"surcharge:";
		    cout<<surcharge<<endl;
		    cout<<"total amount paid: ";
		    total=surcharge+unit;
		    cout<<total;
	   }
	   
	else{
	}
	
system ("pause>0");
   		
}
// in the end use 	system ("pause>0"); 0R, return 0;
	
	
	
	
	
	
	

