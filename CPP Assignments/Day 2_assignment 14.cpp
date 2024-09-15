#include<iostream>
using namespace std;
class Employee{
	int id;
	int salary;
	public:
		void getData();
		void printData();
};

void Employee::getData(){
	cout<<"Enter ID::"<<endl;
	cin>>id;
	cout<<"Enter Salary::"<<endl;
	cin>>salary;
}

void Employee::printData(){
	cout<<"ID is:: "<<id<<endl;
	cout<<"Salary is:: "<<salary<<endl;
}

int main(){
	int size;
	cout<<"Enter Number of Employee:: ";
	cin>>size;
	Employee emp[size];
	for(int i=0; i<size; i++){
		emp[i].getData();
	}
	for(int i=0; i<size; i++){
		emp[i].printData();
	}
}
