#include<iostream>
using namespace std;
int main(){
	//Pointer to an Constant Integer
	int a = 20;
	int b = 30;
	const int* ptr = &a;
	cout<<*ptr<<endl;
	ptr = &b; //allowed
	cout<<*ptr;
	//*ptr = b; //not allowed
}
