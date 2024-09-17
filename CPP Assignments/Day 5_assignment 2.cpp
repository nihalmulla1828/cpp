// C++ program to demonstrate protected access modifier
#include<iostream>
using namespace std;
class Parent{
	protected:
		int id_protected;
};

class Child: public Parent{
	public:
	void setId(int id){
		id_protected = id;
	}
	void displayId(){
		cout<<id_protected;
	}
};

int main(){
	Child c;
	c.setId(101);
	c.displayId();
}
