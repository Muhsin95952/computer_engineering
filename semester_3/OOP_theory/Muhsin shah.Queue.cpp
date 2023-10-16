#include <iostream>
using namespace std;

const int SIZE = 50;

class queue{
	private:
		int data[SIZE];
		int front, back;
	public:
		queue(){
			front = back = 0;
		}
		void inputqueue(int x){
//			if(back == SIZE){
//				cout<<"Queue is full";
//				return ;
//			}
			back++;
			data[back] = x;
		}
		int getfromqueue(){
//			if(front == back){
//				cout<<"Queue is empty";
//				return 0;
//		}
			front++;
			return data[front];
		}
};

int main(){
	queue s;
	s.inputqueue(3);
	cout<<s.getfromqueue()<<endl;
	s.inputqueue(44);
	s.inputqueue(5);
	cout<<"["<<s.getfromqueue()<<" "<<s.getfromqueue()<<"]";
}
