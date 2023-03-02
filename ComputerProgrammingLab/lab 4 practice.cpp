#include <iostream>
using namespace std;
 main(){
// iteration statements or loops
//int i=0; 
//while (i<5) // or (i!=5)
//{
//	cout<<i<<endl<<"This is while loop"<<endl;
//	i++;
//}

//do {cout<<"this is a loop"<<endl; i++; }	// this will must execute atleast once
//while (i!=3);	

//for (int i=0; i<5; i++){
//	cout<<i<<endl<<"this is a loop"<<endl;}

//for (int i=0; i!=5; i++){
//	cout<<i<<endl;}
   
   
   // jump statements  complete, goto, return 0, switch,.....
  // for (int i=0; i!=5; i++){ 
  // if (i==2){
     // continue;    //continue is used for skip
        //  	return 0;  // it terminate function
       int x;
	   cout<<"enter a value"<<endl;
	   cin>>x;
	   if (x==1){
	   	goto lable1;
	   }
	  
	   else{
	   	goto lable2;
	   }
	    lable1:
	    cout<<"this is a loop"<<endl;
	   return 0;
	   lable2:
	   	cout<<"this is a lable"<<endl;
	   	return 0;
	     
   }
