// C++ Program to store GPA of n number of students and display it where n is 
//the number of students entered by the user
#include<iostream>
using namespace std;
class Student{
	int rollNo;
	char name[100];
	int gpa;
	int n;
	Student* stud;
	public:
	Student(){
//		cout<<"Enter Number of Students:: ";
//		cin>>n;
		stud = new Student[3];
	}
	void acceptStudents();
	void printData();
//	~Student(){
//		if(stud){
//			delete[] stud;
//		}
//	}
};

void Student::acceptStudents(){
	for(int i = 0; i<n; i++){
		cout<<"Enter Rollno. "<<i;
		cin>>stud[i].rollNo;
		cout<<"Enter Name "<<i;
		cin>>stud[i].name;
		cout<<"Enter GPA "<<i;
		cin>>stud[i].gpa;
	}
}

void Student::printData(){
	for(int i = 0; i<n; i++){
		cout<<stud[i].rollNo<<"  "<<stud[i].name<<"  "<<stud[i].gpa<<endl;
	}
}

int main(){
	Student s;
	s.acceptStudents();
	s.printData();
}
