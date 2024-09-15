//Find out maximum element in an array
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,6,4,7,9,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int maxElement = arr[0];
	for(int i = 1; i<size; i++){
		if(maxElement < arr[i]){
			maxElement = arr[i];
		}
	}
	cout<<"Max Element is :: "<<maxElement;
}
