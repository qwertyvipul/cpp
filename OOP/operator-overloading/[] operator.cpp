#include<iostream>
using namespace std;

class Array{
public:
	int array[3];
	int operator[](int position){
		return array[position];
	}
	
	Array(int num1, int num2, int num3){
		array[0] = num1;
		array[1] = num2;
		array[2] = num3;
	}
};

int main(){
	Array arr(11, 22, 33);
	cout<<arr[1]<<endl;
	return 0;
}
