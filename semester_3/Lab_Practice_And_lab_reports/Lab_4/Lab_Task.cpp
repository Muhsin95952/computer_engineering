#include <iostream>
using namespace std;

class student{
	private:
		char *name;
		int age;
		float GPA;
	public:
		student(){
			name = " ";
			age = 0;
			GPA = 0;
	
		}
	student(char n[], int a, float g){
		name = n;
		age = a;
		GPA = g;
	}
	void setname(char n[]){
		name = n;
	}
	char *getname(){
		return name;
	}
	void setage(int a){
		age = a;
	}
	int getsge(){
		return age;
	}
	void setgpa(float g){
		GPA = g;
		
	}
	float getgpa(){
		return GPA;
	}
	void show(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"GPA: "<<GPA<<endl;
	}
};

int main(){
	student me;
	char name[]={'M', 'U', 'H', 'S', 'I', 'N', '\t', 'S', 'H', 'A', 'H'};
	me.setname(name);
	me.setage(21);
	me.setgpa(3.1);
	me.show();
	return 0;
}


