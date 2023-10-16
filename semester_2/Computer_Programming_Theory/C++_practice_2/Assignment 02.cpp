#include <iostream>
using namespace std;

main(){
	int myarray[6], largest, smallest, sec_smallest;
	cout<<"Give values to the Array \n";
	for(int i=0; i<=5; i++){
		
		cout<<"myarray["<<i<<"] = ";
		cin>>myarray[i];
	}	
	largest = myarray[0];
		if( myarray[1]>largest){	
		largest=myarray[1];
}
		if(myarray[2]>largest){
		largest=myarray[2];
	}
			if(myarray[3]>largest){
				largest=myarray[2];
		}
				if(myarray[4]>largest){
					largest=myarray[4];
			}
					if(myarray[5]>largest){
						largest=myarray[5];
					}
cout<<"\nLargest among the above values is = "<<largest;


	smallest = myarray[0];
		if( myarray[1]<smallest){	
		smallest=myarray[1];
}
		if(myarray[2]<smallest){
		smallest=myarray[2];
	}
			if(myarray[3]<smallest){
				smallest=myarray[2];
		}
				if(myarray[4]<smallest){
					smallest=myarray[4];
			}
					if(myarray[5]<smallest){
					smallest=myarray[5];
					}
				
cout<<"\n\nSmallest among the above values is = "<<smallest<<endl;

		sec_smallest = largest;

 for(int i=0; i<=5; i++){
 	if (myarray[i]!=smallest && myarray[i]<sec_smallest){
 		sec_smallest=myarray[i];
	 }
 }
	 cout<<"\nSecond smallest value in the above is = "<<sec_smallest<<endl;	
}










