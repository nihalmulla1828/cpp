#include<iostream>
using namespace std;
int main(){
	char * str;
	int n;
	cout<<"Enter number of characters:: ";
	cin>>n;
	str = new char[n+1];
	cout<<"Enter name: "<<endl;
	cin>>str;
	cout<<str<<"  "<<*str<<endl; //*str points to 0th index
	delete[] str; 
}
