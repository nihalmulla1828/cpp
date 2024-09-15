#include<iostream>
using namespace std;
void swap(int& p,int& q);
int main(){
	int a = 20; 
	int b = 30;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	int* ptr = NULL;
	int &ref = *ptr;
	cout<<ref;
}

void swap(int& p, int& q){
	int temp;
	temp = p;
	p = q;
	q = temp;
}
