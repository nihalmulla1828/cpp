#include<iostream>
using namespace std;
int main(){
	int* p;
	p = new int(10); //dynamic allocation of memory for variable p in heap section
	cout<<*p;
	delete p; // deallocation of memory
}
