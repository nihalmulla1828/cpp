#include<iostream>
using namespace std;
class Obj{
	int a;
	public:
		void get();
		Obj add(Obj& obj){
			Obj obj1;
			obj1.a = this->a + obj.a;
			return obj1;
		}
		void show();
};

void Obj::get(){
	cout<<"Enter a ";
	cin>>a;
}

void Obj::show(){
	cout<<this->a;
}

int main(){
	Obj obj2,obj3;
	Obj obj4;
	obj2.get();
	obj3.get();
	obj4=obj3.add(obj2);
	obj4.show();
}
