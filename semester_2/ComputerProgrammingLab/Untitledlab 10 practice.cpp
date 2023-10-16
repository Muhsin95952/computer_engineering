#include <iostream>
using namespace std;

struct fruit{
	int size;
	string color;

}orange;

main(){
	fruit x;
	x={25, "red"};
	cout<<x.color<<endl<<x.size<<endl;
	
	fruit watermelon;
	cin>>watermelon.color;
	cin>>watermelon.size;
	
	cout<<watermelon.color<<endl;
	cout<<watermelon.size<<endl;
	
	orange = watermelon;
	cout<<orange.color<<endl;
	cout<<orange.size<<endl;
	
	
}
