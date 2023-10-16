#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student{
	private:
		char *name;
		int age;
		float gpa;
	public:
		Student(): name(" "), age(0), gpa(0.0) {} 
		Student(char n[], int a, float g): name(n), age(a), gpa(g) {}
		student(const Student &s){
			cout<<"\n In custum copy constructor [deep]"<<endl;
			int len = strlen(s.name);
			name = new char(len + 1);
			strcpy(name, s.name);
			age= s.age;
			gpa = s.gpa;
		}
			void show(){
			cout<<"Student Data: \n"<<endl;
			cout<<"Name: "<<name<<"\tAdress: "<<(void*)name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"GPA: "<<gpa<<endl;
				
		}
		~Student(){
			cout<<"\nTerminating Object::"<<endl;
			delete[]name;
		}
	
};

int main(){
	Student m1("Muhsin shah", 21, 3.12);
	m1.show();
	
	Student a2(m1);
	a2.show();
	
	Student q1 = m1;
	q1.show();
	
return 0;
}
