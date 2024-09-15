//Default Argument
#include<iostream>
using namespace std;
void nums(int = 1,int = 2, int = 3, int = 4);
int main(){
	nums();
	nums(10);
	nums(10,20);
	nums(10,20,30);
	nums(10,20,30,40);
}

void nums(int a, int b, int c, int d){
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
