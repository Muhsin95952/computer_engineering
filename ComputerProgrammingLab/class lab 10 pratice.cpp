#include <iostream>
using namespace std;
  
  
	class rec{
		
		private:
		int lenght;
		int height;
		
		public:
			int area (){
				return lenght * height;
			}
	//	void setvalues	(int , int);
		
		rec(int x, int y){
		lenght=x;
		height=y;
		
		//	cout<<"This is a constructor"<<endl;
		}
	rec();
	
		~rec(){
			cout<<"This is a destructor"<<endl;
		}
	};
	
//	void rec::setvalues(int x, int y){


//		lenght=x;
//		height=y;
//	}
	rec::rec(){
			lenght=6;
			height=6;
		}
	
	main(){
		rec asd(4,4);
		//asd.setvalues(4,5);
		cout<<"Area = "<<asd.area()<<endl;
		 
		rec r1;
		cout<<r1.area();
	}
