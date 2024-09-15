//copy elements of 1 array into another using pointer
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int arr1[size];
	for(int i = 0; i<size; i++){
		*(arr1 + i) = *(arr + i);
	}
	for(int i = 0; i<size; i++){
		cout<<arr1[i]<<" ";
	}
}
