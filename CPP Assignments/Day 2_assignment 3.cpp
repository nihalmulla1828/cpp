// C++ Program to Illustrate that Array Name is a Pointer  that Points to First Element 
//of the Array 
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int * ptr = arr;
	cout<<*ptr<<endl;
	cout<<&arr[0]<<endl;
	cout<<ptr<<endl;
	cout<<*arr<<endl;
	if(&arr[0] == ptr){
		cout<<"Array Name is a Pointer that Points to First Element of Array";
	}
}

