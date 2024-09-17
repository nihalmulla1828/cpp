//case 2: object creation on heap with new operator without virtual keyword
#include<iostream>
using namespace std;
class Employee{
	int id;
	public:
	Employee(int id){
		this->id = id;
	}
	void display(){
		cout<<id<<endl;
	}
};

class WageEmployee : public Employee{
	int salary;
	int bonus;
	public:
		WageEmployee(int id, int salary, int bonus): Employee(id){
			this->salary = salary;
			this->bonus = bonus;
		}
		
		void display(){
			cout<<salary<<"  "<<bonus<<endl;
		}
};

int main(){
	Employee* ptr = new WageEmployee(101,5000,2000);
	ptr->display();
}
