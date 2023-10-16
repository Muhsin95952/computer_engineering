#include <iostream>
using namespace std;

class Complex{
	private:
		double re, img;
	public:
		Complex(): re(0),  img(0){}
		Complex(double r, double i):re(r), img(i){}
		Complex( const Complex &c){
			cout<<"\n\n In Custom Copy Constructor [Shallow]" <<endl;
			re = c.re;
			img = c.img;
		}
		void Show(){
			cout<<"Complex Number: "<<re<<" + "<<img<<"i"<<"   "<<&re<<endl;
		}
};

int main(){
	Complex a1(4, 7.5);
	a1.Show();
	
	Complex a2(a1);
	a2.Show();
	
	Complex a3 = a2;
	a3.Show();
	
  return 0;	
}
