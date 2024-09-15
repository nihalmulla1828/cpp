//calculate average of all elements of an array using pointer
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int total = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i<size; i++){
		total = total + *(arr + i);
	}
	int avg = total/size;
	cout<<"Average is : "<<avg;
}
