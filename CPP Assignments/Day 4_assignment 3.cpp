//Copy Constructor: Shallow Copy
#include<iostream>
using namespace std;
class Demo{
	int x;
	int y;
	public:
		Demo(int x, int y){
			this->x = x;
			this->y = y;
		}
		void display(){
			cout<<x<<"  "<<y<<endl;
		}
};

int main(){
	Demo d1(10,20);
	Demo d2(d1);
	d1.display();
	d2.display();
	
}
