/*3. Modify the program to print also your age at
the end of the millenium*/

#include <iostream>
using namespace std;
int main()
{
	int birthYear, presentYear;
	cout<<"Enter your birth year: ";
	cin>>birthYear;
	cout<<"Enter the present year: ";
	cin>>presentYear;
	int age = presentYear - birthYear;
	cout<<"Your age in the end of the millenium will be: "<<age + 1000;
	return 0;
}
