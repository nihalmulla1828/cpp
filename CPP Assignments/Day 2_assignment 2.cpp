//The C++ Program to Illustrate How to Find the Size of an Array
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	cout<<"Size of arr[0] "<<sizeof(arr[0])<<endl;
	cout<<"Size of arr "<<sizeof(arr)<<endl;
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of an Array is :: "<<size<<endl;
}
