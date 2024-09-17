//case 1: object creation on stack with out virtual keyword
#include<iostream>
using namespace std;
class Employee{
	int id;
	public:
		Employee(int);
		int findSalary(){
		return 0;
		}
		void display();
};

Employee::Employee(int i){
	id = i;
}

void Employee::display(){
	cout<<id<<endl;
}

class WageEmployee : public Employee{
	int hr;
	int rate;
	public:
		WageEmployee(int,int,int);
		int findSalary();
		void display();
};

WageEmployee::WageEmployee(int i,int h, int r):Employee(i){
	hr = h;
	rate = r;
}

int WageEmployee::findSalary(){
	return hr * rate;
}

void WageEmployee::display(){
	Employee::display();
	cout<<hr<<"  "<<rate<<endl;
	cout<<"Salary is:: "<<findSalary();
}

int main(){
	Employee* emp;
	WageEmployee we(101,8,500);
	emp = &we;
	emp->display();
	//cout<<emp->findSalary();
	we.display();
}
