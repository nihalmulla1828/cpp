#include<iostream>
using namespace std;
int main(){
	//Constant Pointer to an Integer
	int a = 20;
	int b = 30;
	int* const ptr = &a;
	cout<<*ptr<<endl;
	//ptr = &b; //not allowed
	*ptr = b; // allowed
	cout<<*ptr<<endl;
}
