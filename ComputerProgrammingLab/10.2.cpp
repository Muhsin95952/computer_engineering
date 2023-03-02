#include <iostream>
#include <string>
using namespace std;
struct movies
{
	string title;
	int year;
};

void output(movies array[3]){
	for (int i=0; i<3; i++){
	cout<<"\nMovie "<<i+1<<" title is: "<<array[i].title<<endl;	
		cout<<"Movie "<<i+1<<" release year is: "<<array[i].year<<endl;
		
	}
}

main(){
	movies asd[3];
	for (int i=0; i<3; i++){
		cout<<" Enter movie title: ";
		cin>>asd[i].title;
		cout<<"\n Erelease year of movie: ";
		cin>>asd[i].year;
	}	
	output(asd);		
}
