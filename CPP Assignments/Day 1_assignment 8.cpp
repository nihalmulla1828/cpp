#include<iostream>
using namespace std;
int main(){
	int a = 10;
	int& refa = a;
	cout<<a<<" "<<refa<<endl;
	int b = 20;
	refa = b; //value of b is stored inside reference of a but address doesnot change 
	cout<<a<<" "<<b<<" "<<refa<<endl;
	cout<<&a<<" "<<&refa<<" "<<&b; //a's address is inside refa
}
