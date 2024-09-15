#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Size of Array"<<endl;
	cin>>size;
	int arr[size];
	for(int i = 0; i<size; i++){
		cout<<"Enter "<<i<<endl;
		cin>>arr[i];
	}
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}
