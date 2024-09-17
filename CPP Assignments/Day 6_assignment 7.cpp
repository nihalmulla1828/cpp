//case 4: object creation on heap  with virtual keyword
#include<iostream>
using namespace std;
class Employee{
	int id;
	public:
		Employee(int id){
			this->id = id;
		}
		virtual void display(){
			cout<<id<<endl;
		}
};

class WageEmployee : public Employee{
	int hrs;
	int rate;
	public:
		WageEmployee(int id, int hrs, int rate):Employee(id){
			this->hrs = hrs;
			this->rate = rate;
		}
		void display(){
			cout<<hrs<<"  "<<rate<<endl;
		}
};

int main(){
	Employee* emp = new WageEmployee(101,8,500);
	emp->display();
}
