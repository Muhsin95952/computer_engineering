#include <iostream>
using namespace std;

class Complex
{
	private:
		double re, img;
	public:
		Complex(): re(0), img(0) {}
		Complex(double r, double i): re(r), img(i) {}
		void show(){
			cout<<"Complex number: "<<re<<"+"<<img<<"i"<<&re<<endl;
		}
};
int main(){
	Complex a1(2, 7.8), a3;
	a1.show();
	Complex a2(a1);
	a2.show();
	a3=a1;
	a3.show();
	
}
