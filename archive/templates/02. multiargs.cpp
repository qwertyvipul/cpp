#include<iostream>
using namespace std;

template <class A, class B>
B find(A* array, A value, B size){
	for(B j=0; j<size; j++){
		if(array[j]==value)
		return j;
	}
	return static_cast<B>(-1);
}

int main(){
	int array[] = {2, 3, 4, 5, 6};
	cout<<find(array, 4, 5)<<endl;
	return 0;
}
