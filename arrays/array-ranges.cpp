#include<iostream>
using namespace std;

void printArray(const int *start, const int *end){
	const int *ptr;
	for(ptr = start; ptr != end; ptr++){
		cout<<*ptr<<endl;
	}
}

int main(){
	int array[] = {11, 12, 13, 14, 15, 16};
	cout<<"Printing all of the array elements: "<<endl;
	printArray(array, array+sizeof(array)/sizeof(array[0]));
	cout<<"Printing 2nd to 2nd last of the array elements: "<<endl;
	printArray(array+1, array+sizeof(array)/sizeof(array[0])-1);
	return 0;
}
