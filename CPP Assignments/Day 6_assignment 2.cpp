#include<iostream>
using namespace std;
class Base{
	int a;
	public:
		Base(int);
		void display();
};

Base::Base(int a){
	this->a = a;
}

void Base::display(){
	cout<<a<<endl;
}

class Child : public Base{
	int b;
	public:
		Child(int,int);
		void display();
};

Child::Child(int a, int b):Base(a){
	this->b = b;
}

void Child :: display(){
	Base::display();
	cout<<b;
}

int main(){
	Child c(10,20);
	c.display();
}
