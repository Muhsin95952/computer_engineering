#include <iostream>
#include "shape.cpp"
#include "circle.cpp"
#include "square.cpp"




int main(){
	shape *sh;
	circle c1;
	square s1;
//	shape sh1;
	
//	sh = &sh1;
  
	sh = &c1;
	sh->draw();
	
	sh = &s1;
	sh->draw();
	
	return 0;
}
