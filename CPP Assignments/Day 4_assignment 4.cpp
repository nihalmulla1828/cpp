#include<iostream>
using namespace std;
#include<string.h>
class DeepCopy{
	int len;
	char* ptr;
	public:
		DeepCopy(char*);
		DeepCopy(DeepCopy&);
		void display();
};

DeepCopy::DeepCopy(char* ptr){
	this->len = strlen(ptr);
	this->ptr = new char[len+1];
	strcpy(this->ptr,ptr);
}

DeepCopy::DeepCopy(DeepCopy& d){
	this->len = d.len;
	this->ptr = new char[this->len + 1];
	strcpy(this->ptr, d.ptr);
}

void DeepCopy::display(){
	cout<<"Length  "<<len<<endl;
	cout<<"String  "<<ptr<<endl;
}

int main(){
	DeepCopy d1("Nihal");
	d1.display();
	{
		DeepCopy d2(d1);
		d2.display();
	}
	d1.display();
	
}
