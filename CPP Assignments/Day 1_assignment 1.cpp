#include<iostream>
using namespace std;
class A{
	int a = 10;
	public: 
	get(){
		cout<<a;//it is better to use one public while accessing private data members
	}
};

int main(){
	A obj;
	obj.get();
}
