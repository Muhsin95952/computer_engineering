#include <iostream>
using namespace std;
void sort4(int*n1, int*n2, int*n3, int*n4);
bool sort4_2(int*a, int*b, int*c, int*d);
int main()
{
    int a = 4;
    int b = 5;
    int c = 1;
    int d = 0;
    sort4(&a, &b, &c, &d);
    cout<<sort4_2(&a, &b, &c, &d);
    return 0;
}
void sort4(int*n1, int*n2, int*n3, int*n4)
{
    int arr[4];
    arr[0] = *n1; arr[1] = *n2; arr[2] = *n3; arr[3] = *n4;
    int max = arr[0], tell, temp[4];
    for(int i=3; i>=0; i--)
    {
        for(int j=0; j<4; j++)
        {
            if(max < arr[j])
            {
                max = arr[j];
                tell = j;
            }
        }
        temp[i] = max;
        arr[tell] = 0;
        max = 0;
    }
    *n1 = temp[0]; *n2 = temp[1]; *n3 = temp[2]; *n4 = temp[3];
}
bool sort4_2(int*a, int*b, int*c, int*d)
{
    if(*a<=*b && *b<=*c && *c<=*d)
    {
        return true;
    }
}