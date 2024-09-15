#include <iostream>  
using namespace std; 
//1)addition of 2 matrix
//2)transpose of a matrix
//3)square of all elements of 2d array
class additionA{
	int arr[3][3];
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	public:
		void accept();
		void show();
		void add();
		void transpose();
		void sqr();
};

void additionA::accept(){
	cout<<"Enter 1st 3x3 matrix::"<<endl;
	for(int i = 0; i<3 ; i++){
		for(int j = 0; j<3; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Enter 2nd 3x3 matrix::"<<endl;
	for(int k = 0; k<3 ; k++){
		for(int l = 0; l<3; l++){
			cin>>arr1[k][l];
		}
	}
}

void additionA::show(){
	for(int i = 0; i<3 ; i++){
		for(int j = 0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
	}
	cout<<endl;
		for(int k = 0; k<3 ; k++){
		for(int l = 0; l<3; l++){
			cout<<arr1[k][l];
		}
	}
}

void additionA::add(){
	for(int i = 0; i<3 ; i++){
		for(int j = 0; j<3; j++){
			arr2[i][j] = arr[i][j] + arr1[i][j];
		}
	}
	cout<<"After Addition::"<<endl;
	for(int k = 0; k<3 ; k++){
		for(int l = 0; l<3; l++){
			cout<<arr2[k][l]<<" ";
		}
}
}

void additionA::transpose(){
	cout<<"Transpose Matrix is:: ";
	for(int i = 0; i<3 ; i++){
		for(int j = 0; j<3; j++){
			cout<<arr[j][i]<<" ";
		}
	}
}

void additionA::sqr(){
	for(int a = 0; a<3 ; a++){
		for(int b = 0; b<3; b++){
			arr3[a][b] = arr[a][b] * arr[a][b];
		}
	}
	cout<<"After Square::"<<endl;
	for(int k = 0; k<3 ; k++){
		for(int l = 0; l<3; l++){
			cout<<arr3[k][l]<<" ";
		}
}
}

int main(){
	additionA a;
	a.accept();
	a.show();
	a.add();
	a.transpose();
	a.sqr();
}
