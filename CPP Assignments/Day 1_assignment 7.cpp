#include<iostream>
using namespace std;
int main(){
	//Pointer to an Integer
	int a = 20;
	int b = 30;
	int c = 40;
	int* ptr = &a;
	cout<<*ptr<<endl;
	ptr = &b; //allowed
	*ptr = c; //allowed
}
