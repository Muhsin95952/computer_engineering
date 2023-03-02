#include <iostream>
using namespace std;
  class room {
  	private:
  		int  lenght;
  		int  width;
  		int height;
  		
  	public:	
  		int area() {
  			return lenght*width;
  	}

		  int volume(){
		  	return lenght*width*height;
		  	 }
	room(){			cout<<"This program will calculate Area and Volume of the room "<<endl;
	}	  	 
	~room(){		cout<<"***************This is the end of the program**********"<<endl;
	}
	void values();	  	 
  };
  void room::values(){
  	int x, y, z;
  	cout<<"Enter lenght "<<endl;
  	cin>>x;
  	cout<<"Enter width "<<endl;
  	cin>>y;
  	cout<<"Enter height "<<endl;
  	cin>>z;
  	 lenght = x;
  	 width = y;
  	 height = z; 	  	
  }  
  main(){
  	room room1;
  	room1.values();	
  	cout<<"\nArea = "<<room1.area()<<" m^2"<<endl;
  	cout<<"Volume = "<<room1.volume()<<" m^3"<<endl;
 	 }
