/*5. Correct the errors in the following program
include <iostream.h>
int main();
{
int i, j
i = ‘A’;
j = “B”;
i = ‘C’ + 1;
cout >> “End of program”;
return 0

# before include missing
int i, j;   ; missing
using namespace std;   missing
semi colon (;) after main function
quotes and doucle quotes were strange
i, j were nit used un the program

}*/
#include <iostream>
using namespace std;
int main()
{
	char i;
	string j;
	i = 'A';
	j = "B";
	i = 'C';
	cout<<"End of program"<<i<<j;
	return 0;
}
