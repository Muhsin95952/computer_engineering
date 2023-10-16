#include <iostream>
using namespace std;
void sort(int n,int &a,int &b,int &c,int &d)
{ 

   if (n <=5)
   { 
   cout<<"For K="<<n<<endl;
   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    sort(n+1,a,b,c,d);
   }
}
int main()
{ int k,a=2,b=3,c=5,d=6;
cout << "Enter Number: "; cin >> k;
cout << "Output:\n";
sort(k,a,b,c,d);
return 0;
}
