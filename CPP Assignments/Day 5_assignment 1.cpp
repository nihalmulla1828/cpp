// C++ program to demonstrate public
// access modifier
#include<iostream>
using namespace std;
class Circle{
	public:
		double radius;
		double area(){
			return 3.14 * radius * radius;
		}
};

int main(){
	Circle c;
	c.radius = 4.5;
	cout<<"Radius is:: "<<c.radius<<endl;
	cout<<"Area is:: "<<c.area()<<endl;
}
