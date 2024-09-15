// c++ program to illustrate the two dimensional array
#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<"Enter ";
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i<3; i++){
		cout<<"\n";
		for(int j = 0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
	}
}
