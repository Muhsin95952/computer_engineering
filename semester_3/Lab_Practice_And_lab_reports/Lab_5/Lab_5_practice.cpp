#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Employee{
	private:
		char *name;
		char *department;
		double salary;
		double service_period;
	public:
		Employee(){
			name = " ";
			department = (" ");
			salary = 0;
			service_period = 0;
		}
			Employee(char n[], char d[], double sl, double sp){
			name = n;
			department = d;
			salary = sl;
			service_period = sp;
		}
			Employee(const Employee &E){
				int len = strlen(E.name);
				name = new char(len + 1);
				department = new char(len + 1);
			//	name = new char(E.name);
			//	department = new char(E.department);
				salary = E.salary;
				service_period = E.service_period;	
		}
			void setEmloy(){
				int namelenght = strlen(name);
				name = new char[namelenght + 1];
				cout<<"Enter Name: \t";
				gets(name);
				int departmentlenght = strlen(department);
				department = new char[departmentlenght + 1];
				cout<<"Enter department: \t";
				cin>>department;
				gets(department);
				cout<<"Enter your salary: \t";
				cin>>salary;
				cout<<"Enter your period of service \t";
				cin>>service_period;
		}		
			
			void show(){
				cout<<"Data of employee is given below"<<endl;
				cout<<"Name: "<<name<<endl;
				cout<<"Department: "<<department<<endl;
				cout<<"Salary: "<<salary<<endl;
				cout<<"Period of service: "<<service_period<<endl;
		}	
				
			
};

int main(){
	Employee a1;
	a1.setEmloy();
	a1.show();
   		return 0;
}





