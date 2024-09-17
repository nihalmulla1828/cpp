// C++ program to demonstrate implementation of Inheritance
#include<iostream>
using namespace std;
class Parent{
	protected:
		int parentId = 101;
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
	//c.parentId = 101; Not Allowed
	c.childId = 102;
	c.display();
}
