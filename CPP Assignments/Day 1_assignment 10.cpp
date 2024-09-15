#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
	public:
		void setImg(int i);
		void setReal(int r);
		int getImg();
		int getReal();
		void getData();
};

void Complex::setImg(int i){
	this->img = i;
}

void Complex::setReal(int r){
	this->real = r;
}

int Complex::getImg(){
	return this->img;
}

int Complex::getReal(){
	return this->real;
}

void Complex::getData(){
	cout<<Complex::getReal()<<" + "<<Complex::getImg()<<"i"<<endl;
}

int main(){
	Complex c;
	c.setImg(3);
	c.setReal(2);
	c.getData();
}
