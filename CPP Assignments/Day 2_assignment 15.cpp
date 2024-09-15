//store details of 10 books in an array
#include<iostream>
using namespace std;
class Books{
	int bookId;
	char bookName[30];
	int bookPrice;
	public:
		void getBookDetails();
		void printBookDetails();
};

void Books::getBookDetails(){
	cout<<"Enter Book ID:: "<<endl;
	cin>>bookId;
	cout<<"Enter Book Name:: "<<endl;
	cin>>bookName;
	cout<<"Enter Book Price:: "<<endl;
	cin>>bookPrice;
}

void Books::printBookDetails(){
	cout<<"Book ID is:: "<<bookId<<endl;
	cout<<"Book Name is:: "<<bookName<<endl;
	cout<<"Book Price is:: "<<bookPrice<<endl;
}

int main(){
	int size;
	cout<<"Enter Number of Books:: ";
	cin>>size;
	Books book[size];
	for(int i = 0; i<size; i++){
		book[i].getBookDetails();
	}
	for(int i = 0; i<size; i++){
		book[i].printBookDetails();
	}
}
