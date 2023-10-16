#include <iostream>
using namespace std;

class Complex{                    //class Complex has 3 data member and 7 mamber function
	private:
		double re, img;
		static int countobject;
	public:
		Complex();
		Complex(double r, double i);
		void setRe(double r);
		void setImg(double i);
		double getRe()const;
		double getImg()const;
		static int getcount();
		void showComplex()const;	
		~Complex();	
}; 
int Complex::countobject = 0;

Complex::Complex(){
	re = 0.0;
	img = 0.0;
	countobject++;
}
Complex::Complex(double r, double i){
	re = r;
	img = i;
	countobject++;
}
void Complex::setRe(double r){
	re = r;
}
void Complex::setImg(double i){
	img = i;
	
}
double Complex::getRe()const{
	return re;
}
double Complex::getImg()const{
	return img;
}
int Complex::getcount(){
	return countobject;
}
void Complex::showComplex()const{
	if (img>=0)
		cout<<"Complex No.: "<<re<<"+"<<img<<"i"<<endl;
		else
			cout<<"Complex No.: "<<re<<img<<"i"<<endl;
}
Complex::~Complex(){
	cout<<"Object destroyed"<<endl;
}
const int SIZE = 5;
int main(){
	cout<<"initial stage count: "<<Complex::getcount()<<endl;
/*	Complex c[SIZE];  
	       //this is an array of object
	double r, i;     
	for(int num = 0; num<5; num++){
	cout<<"Enter real and img "<<endl;
	cin>>r>>i;
	c[num].setRe(r);
	c[num].setImg(i);
	}
	for(int num = 0; num<5; num++){
		c[num].showComplex();
	}
	*/
	Complex *C = new Complex();   //C is a Complex pointer Obj.
	C->showComplex();
	C->setRe(55);
	C->setImg(-78);
	C->showComplex();
	delete C;
	cout<<"Final stage count: "<<Complex::getcount()<<endl;
	return 0;
}