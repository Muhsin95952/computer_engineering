#include <iostream>
using namespace std;

class A{
	private:
		int X;
	protected:
		int Y;
	public:
		int Z;
		
		A(){
			X =0;	Y=0;	Z = 0;	
		}
		A(int xx, int yy, int zz){
			X=xx;		Y=yy;		Z=zz;
		}	
		void showA(){
			cout<<"X = " <<X<<endl;
			cout<<"Y = " <<Y<<endl;
			cout<<"Z = " <<Z<<endl;
		}
};

class B{
	private:
		int F, G, H;
	public:
		B(){
		F = 0;
		G = 0;
		H = 0;
		
		}
		B(int ff, int gg, int hh)
		{
		 F = ff;
		 G = gg; 
		 H = hh;
			
		}
		void showB(){
		
			cout<<"F = "<<F<<endl;
				cout<<"G = "<<G<<endl;
					cout<<"H = "<<H<<endl;		
		}
}; 

class C:public A, public B{
	private:
		int V;
	
	public:
		C():A(),B(){
			V = 0;
		}
		C(int xx, int yy, int zz, int ff, int gg, int hh, int vv):A(xx, yy, zz),B(ff, gg, hh){
			V = vv;
		
		}
		void showC(){
			showA();
			showB();
			cout<<"V = "<<V<<endl;
		
		}
			
};

int main(){
	A objA(1, 2, 3);
	cout<<"Object of class A"<<endl;
	objA.showA();

	B objB(4, 5, 6);
	cout<<"Object of class B"<<endl;
	objB.showB();
	
	C objC(9,8,7,6,5,4,3);
	cout<<"Object of class C"<<endl;
	objC.showC();
	return 0;
}
