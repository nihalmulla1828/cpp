// C++ program for dynamic allocation
#include<iostream>
using namespace std;
class Demo{
	int* ptr;
	public:
	Demo(){
		ptr = new int;
		*ptr = 100;
	}
	void display(){
		cout<<*ptr;
	}
};

int main(){
	Demo d;
	d.display();
}
