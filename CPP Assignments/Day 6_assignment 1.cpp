//Single Inheritance
#include<iostream>
using namespace std;
class Base{
	protected:
		int bonus = 2000;
};

class Child : public Base{
	protected:
		int salary = 6000;
	public:
		void display(){
			cout<<"Monthly Salary:: "<<salary + bonus;
		}
};

int main(){
	Child c;
	c.display();
}
