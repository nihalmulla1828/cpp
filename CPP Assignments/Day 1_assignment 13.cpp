#include<iostream>
using namespace std;
class Addition{
	int a;
	int b;
	double c;
	double d;
	int e;
	public:
		void add(int,int);
		void add(double,double);
		void add(int,int,int);
};

void Addition::add(int a,int b){
	this->a = a;
	this->b = b;
	cout<<this->a + this->b<<endl;
}

void Addition::add(int a,int b, int c){
	this->a = a;
	this->b = b;
	e = c;
	cout<<this->a + this->b + e<<endl;
}

void Addition::add(double a, double b){
	c = a;
	d = b;
	cout<<c + d<<endl;
}

int main(){
	Addition a;
	a.add(5,6);
	a.add(2.3,3.4);
	a.add(7,8,9);
}

