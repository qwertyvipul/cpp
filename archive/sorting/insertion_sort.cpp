#include<iostream>
using namespace std;

int main(){
	int num; //the number of elements we want to sort
	cout<<"Enter the number of elements you want to sort: "; cin>>num;
	int array[num]; //the array of the elements
	for(int i=0; i<num; i++){
		cout<<"Enter value "<<(i+1)<<": "; cin>>array[i];
	}
	
	cout<<"Original sequence: ";
	for(int i=0; i<num; i++){
		cout<<array[i];
		if(i!=num-1) cout<<", ";
	}
	cout<<endl;
	
	//sorting begins here
	int pos=0;
	while(pos!=num-1){
		int min = array[pos], index = pos;
		for(int i=pos; i<num; i++){
			if(array[i]<min){
				min = array[i];
				index = i;
			}
		}
		
		for(int i=index; i>pos; i--){
			array[i] = array[i-1];
		}
		array[pos] = min;
		pos++;
	}
	
	cout<<"Sorted sequence: ";
	for(int i=0; i<num; i++){
		cout<<array[i];
		if(i!=num-1) cout<<", ";
	}
	cout<<endl;
}
