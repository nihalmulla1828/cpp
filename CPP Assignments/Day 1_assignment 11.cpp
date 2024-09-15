#include<iostream>
using namespace std;
class Complex{
	int img;
	int real;
	public:
		Complex();
		Complex(int,int);
		void show();
};

Complex::Complex(int r,int i){
	this->real = r;
	this->img = i;
}

//Default constructor will not invoke as we are passing values, it will access parametarized
Complex::Complex(){
	cout<<this->real<<" + "<<this->img<<"i";
}

void Complex::show(){
	cout<<this->real<<" + "<<this->img<<"i";
}

int main(){
	Complex c(2,3);
	c.show();
}
