#include <iostream>
using namespace std;
class vector{
	private:
		float x, y;
		int *a;
	public:
		vector(){
			x=0;
			y=0;
			&a = " ";
				}
		vector(float xx, float yy, int &aa){
			x =xx;
			y = yy;
			a = aa;
		}		
		void print(){
			cout<<"The sum of two vector is ("<<x<<" , "<<y<<")"<<endl;
		}
		vector operator+(const vector &b){
			return vector(x + b.x, y + b.y);	
		}
		vector operator()(){
			
		}
		
		
};
int main(){
	vector u(3.5, 4.5), v(5.5, 6.5), s;
	s=u+v;
	s.print();
	
}
