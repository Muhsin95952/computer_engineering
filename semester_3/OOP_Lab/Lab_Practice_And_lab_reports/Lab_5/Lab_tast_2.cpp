#include <iostream>
using namespace std;

class D{
	private:
		int X;
	protected:
		int Y;
	public:
		int Z;
		
		D(){
			X =0;	Y=0;	Z = 0;	
		}
		D(int xx, int yy, int zz){
			X=xx;		Y=yy;		Z=zz;
		}	
		void showD(){
			cout<<"X = " <<X<<endl;
			cout<<"Y = " <<Y<<endl;
			cout<<"Z = " <<Z<<endl;
		}
};

class F:public D{
	private:
		int Q;
	public:
		F():D(){
			Q = 0;
			
		}
		F(int xx, int yy, int zz, int qq):D(xx, yy, zz){
			Q = qq;
		}
		void showF(){
			showD();
			cout<<"Q = "<<Q<<endl;
		}
};

class G:public F{
	private:
		int T;
	public:
		G():F(){
			T = 0;
		}
		G(int xx, int yy, int zz, int qq, int tt):F(xx, yy, zz, qq){
			T = tt;
			
		}
		void showT(){
			showF();
			cout<<"T = "<<T<<endl;
		}
};



int main(){
	cout<<"Objects of class D"<<endl;
	D a1(4,8,9);
	a1.showD();
	
	cout<<"Object of class F"<<endl;
	F a2(1,2,3,4);
	a2.showF();
	
	cout<<"Object of class G"<<endl;
	G a3(11,22,33,44,55);
	a3.showT();
	return 0;
}
