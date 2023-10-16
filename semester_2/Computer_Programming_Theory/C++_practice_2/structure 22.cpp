#include <iostream>
using namespace std;

struct result {
	char name[15];
	int marks[4];
	int total;
	char grade;
	
};
main(){

 result student[5] = {{"Muhsin", {20, 30, 40, 45}, 200, 'a'},
 						{"saad", {30, 40, 45,55}, 250, 'b'},
						 {"zaid", {44, 55, 66, 33}, 280, 'd'},
						 {"ilyas", {22, 33, 44, 66}, 190, 'e'},
						 {"absalaam", {44, 55, 77 ,88}, 330, 'a'},};
						 
	cout<<student[0].name<<"  "<<student[0].marks[0]<<"  "<<student[0].total<<"  "<<student[0].grade<<endl;					 
	cout<<student[1].name<<"  "<<student[1].marks[1]<<"  "<<student[1].total<<"  "<<student[1].grade<<endl;
	cout<<student[2].name<<"  "<<student[2].marks[2]<<"  "<<student[2].total<<"  "<<student[2].grade<<endl;
	cout<<student[3].name<<"  "<<student[3].marks[3]<<"  "<<student[3].total<<"  "<<student[3].grade<<endl;
	cout<<student[4].name<<"  "<<student[4].marks[4]<<"  "<<student[4].total<<"  "<<student[4].grade<<endl;
	
	
	
}
