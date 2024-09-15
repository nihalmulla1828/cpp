#include<iostream>
using namespace std;
int main(){
	//Constant Pointer to an Constant Integer
	int a = 20;
	int b = 30;
	const int* const ptr = &a;
	cout<<*ptr<<endl;
	// ptr = &b; not allowed
	//*ptr = b; not allowed
}
