//Aimal Khan.

#include <iostream>
using namespace std;

int binarySearch(int searchIt, int *arr, int sizeOfArr){ //Find a number in set of given size.
    if(sizeOfArr == 0 || searchIt <= arr[0])
		return -1;
    if(searchIt > arr[sizeOfArr-1])
		return sizeOfArr;

    int mid, leftHalf = 0, rightHalf = sizeOfArr - 1;
    while(rightHalf - leftHalf > 1){
        mid = (leftHalf + rightHalf) / 2;
        (searchIt <= arr[mid] ? rightHalf : leftHalf) = mid;
    }
    return rightHalf;
}

int main(){
    int arrSize = 10;
    int arr[arrSize] = {6, 7, 55, 56, 67, 68, 81, 100, 190};
	int findIt;
	cout<<"To find position of an integer between 1 to 10 \nEnter a number B/W 1-10:  ";
	cin>>findIt;
    int index = binarySearch(findIt, arr, arrSize);
    cout<<index;

    return 0;
}
