#include<iostream>
using namespace std;
class Constant{
	int a;
	public:
	void setValue(int x);
	int getValue() const;
};

void Constant::setValue(int x){
	a = x;
}

int Constant::getValue() const{
	//a = 20; readonly function cannot assign
	return a;
}

int main(){
	Constant c1;
	c1.setValue(10);
	cout<<c1.getValue();
}
