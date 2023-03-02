#include <iostream>
using namespace std;
int add(int x, int y){
	return x+y;

}
int sub(int a, int b){
	return a-b;
	
}
int operation(int m, int n, int (*p)(int, int )){
	int sum = (*p)(m, n);
	return sum;
}
main(){
int  c, d;
c= operation(2, 4, sub);
cout<<c;	
	
}
