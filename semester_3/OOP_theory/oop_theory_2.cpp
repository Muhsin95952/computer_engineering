#include <iostream>
using namespace std;
//void f(int n)
//{ if (n > 0)
//{ f(n-2); cout << n << " "; f(n-1);
//}
//}
int main()
{
string url = "https://www.cs.ps.ie";
cout<<url<<endl;
url.replace(6, 2, "\\\\");
cout<<url<<endl;


return 0;
}
