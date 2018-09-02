#include<iostream>
using namespace std;

int main(){
	int array[] = {11, 12, 13, 14, 15};
	cout<<"This is the starting array address: "<<array<<endl;
	cout<<"This is the first value: "<<*array<<endl;
	cout<<"Printing all the values: "<<endl;
	for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
		cout<<*(array+i)<<endl;
	}
	return 0;
}
