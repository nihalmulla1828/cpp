//Dynamic Memory Allocation for Arrays
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter array size:: ";
	cin>>size;
	int* arr = new int[size];
	for(int i = 0; i<size; i++){
		cout<<"Enter "<<i<<endl;
		cin>>*(arr + i);
	}
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	delete[] arr;
}
