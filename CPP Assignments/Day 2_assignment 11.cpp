//Default argument directly passed while defining function
#include<iostream>
using namespace std;
void display(char c = '*', int num = 100){
	cout<<c<<" "<<num<<endl;
}
int main(){
	display();
	display('$');
	display('#',200);
	display(5); //copying starts from left to right while default arguments fill from right
	//to left
}
