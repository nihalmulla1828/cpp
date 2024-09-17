#include<iostream>
using namespace std;
class A{
	int x;
};
class B{
	//int y;
	virtual void a(){
		cout<< "A";
	}
	virtual void show(){
		cout<< "A";
	}
};
int main(){
	A a;
	B b;
	cout<<sizeof(a)<<endl;
	cout<<sizeof(b)<<endl;
}
