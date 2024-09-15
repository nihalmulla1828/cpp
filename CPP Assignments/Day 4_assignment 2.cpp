//Take size of array from user,
//Take inputs from user
//Show inputs
//Show max number
//Show min number
#include<iostream>
using namespace std;
class Number{
	int size;
	int* arr;
	public:
		Number(){
			cout<<"Enter size of an array:: ";
			cin>>size;
			arr = new int[size];
		}
		void getNum(){
			for(int i = 0; i<size; i++){
				cout<<"Enter";
				cin>>arr[i];
			}
		}
		void showNums(){
			for(int i = 0; i<size; i++){
				cout<<arr[i]<<endl;
			}
		}
		void maxNum(){
			int maxNo = arr[0];
			for(int i = 1; i<size; i++){
				if(maxNo < arr[i]){
					maxNo = arr[i];
				}
			}
			cout<<"Max Number is:: "<<maxNo<<endl;
		}
		void minNum(){
			int minNo = arr[0];
			for(int i = 1; i<size; i++){
				if(minNo > arr[i]){
					minNo = arr[i];
				}
			}
			cout<<"Min Number is:: "<<minNo<<endl;
		}
};

int main(){
	Number n;
	n.getNum();
	n.showNums();
	n.maxNum();
	n.minNum();
}
