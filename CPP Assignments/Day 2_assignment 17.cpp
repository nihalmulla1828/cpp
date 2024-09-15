#include<iostream>
using namespace std;
class constObject{
	public:
	int a;
	public:
	constObject(){
		a = 10;
	}
};

int main(){
	const constObject obj;
	cout<<obj.a;
	//obj.a = 20;//not allowed
}
