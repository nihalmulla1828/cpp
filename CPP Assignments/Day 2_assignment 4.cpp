// C++ Program to Print Array Elements without Indexing 
#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	cout<<"First Element "<<*(arr + 0)<<endl; //I can write *arr or arr[0] also
	cout<<"Second Element "<<*(arr + 1)<<endl;
	cout<<"Third Element "<<*(arr + 2)<<endl;
	cout<<"Fourth Element "<<*(arr + 3)<<endl;
	cout<<"Fifth Element "<<*(arr + 4)<<endl;
}
