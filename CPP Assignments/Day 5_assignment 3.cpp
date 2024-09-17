// C++ program to demonstrate implementation of Inheritance
#include<iostream>
using namespace std;
class Parent{
	public:
		int parentId;
};

class Child: public Parent{
	public:
		int childId;
		void display(){
			cout<<parentId<<"   "<<childId;
		}
};

int main(){
	Child c;
	c.parentId = 101;
	c.childId = 102;
	c.display();
}
