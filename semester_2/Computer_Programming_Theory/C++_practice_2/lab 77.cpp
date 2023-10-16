#include <iostream>
using namespace std;

float grade(int m){

	float per, z;
	per =m;
	z=(per*100)/150;
				
	return per;
	
}


char grade(float percentage){
	
	char x;
		if (percentage>90)
	x='A';
	else if (percentage>80)
	x='B';
	else if (percentage>70)
	x='C';
	else if (percentage>60)
	x='D';
	else
	x='F';
		
 return x;		
}

void grade(){
	int m;
		cout<<"Enter marks"<<endl;
	cin>>m;		
	float y=grade(m);
	
		char x;
		x=grade(y);
		cout<<"Marks = "<<m<<endl;
	
		cout<<"Percentage = "<<y<<endl;
		
		cout<<"Grade = "<<x<<endl;					
}

main()
{

	grade();
	}

