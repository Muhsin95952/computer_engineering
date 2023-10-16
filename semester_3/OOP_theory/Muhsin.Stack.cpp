#include <iostream>
using namespace std;

const int SIZE = 50;

class stack{
	private:
		int data[SIZE];
		int top;
	public:
		stack(){
			top= -1;
		}
		void input(int x){
			top++;
			data[top] = x;
		}
		int output(){
			top--;
		return data[top];
			
		}
};
int main(){
	stack s ;
	s.input(44);
	s.input(5);
	s.input(2);
	s.input(1);
	cout<<"["<<s.output()<<" ";
	cout<<s.output()<<" ";
	cout<<s.output()<<" ";
	cout<<s.output()<<" ";
	cout<<s.output()<<" ";
	cout<<s.output()<<" ]\n";
}
