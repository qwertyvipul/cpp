#include<iostream>
using namespace std;

int main(){
	int *array;
	int num;
	cout<<"Enter the number of elements you want to enter: "; 
	cin>>num;
	array = new int[num];
	for(int counter=0; counter<num; counter++){
		cout<<"Enter the element("<<counter+1<<"): ";
		cin>>*(array+counter);
	}
	
	for(int counter=0; counter<num; counter++){
		cout<<*(array+counter)<<endl;
	}
	
	delete []array;
}
