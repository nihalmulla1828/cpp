#include<iostream>
using namespace std;
class Demo{
	public:
	void show(){
		cout<<"In show";
	}
	void show() const{
		cout<<"In const show";
	}
};

int main(){
	Demo d;
	d.show(); //If I want to call const show function then we have to declare 
	//object as const
}
