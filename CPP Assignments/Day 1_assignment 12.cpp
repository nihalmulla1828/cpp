#include<iostream>
using namespace std;
class Complex{
	int img;
	int real;
	static int cnt;
	public:
		Complex();
		Complex(int,int);
		static int getCnt();
		void show();
};

int Complex::cnt;
int Complex::getCnt(){
	return cnt;
}

Complex::Complex(){
	cnt++;
}

Complex::Complex(int r,int i){
	this->real = r;
	this->img = i;
	cnt++;
}

int main(){
	Complex c1,c2;
	Complex c3(2,3);
	cout<<"No.of objects created :: "<<Complex::getCnt();
}
