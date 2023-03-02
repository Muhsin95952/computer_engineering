#include <iostream>
using namespace std;

 float grade(int mark)
 {	float a, percent;
 	a= float(mark);
 	percent=(a*100)/(150);
 	return percent;
 }
 char grade(float percent)
 {	char c;
	if(percent>90)
	c='A';
	else if(percent>80)
	c='B';
	else if(percent>70)
	c='C';
	else if(percent>60)
	c='D';
	else if(percent>50)
	c='E';
	else
	c='F';
	return c;	
 }
 void grade()
 {	int mark;float x;char z;
	cout<<"Enter obtained marks: \n Total marks are = 150 \n\n"; 
	cin>>mark;
	
	x=grade(mark);
	z=grade(x);
	cout<<"Your marks is :"<<mark<<endl;
	cout<<"Percentage of the marks you have entered is :"<<x<<"%"<<endl;
	cout<<" Your Grade according to your marks is :"<<z;	
 }
 int main(){
 	grade();
 	
 	return 0;
 }
 
