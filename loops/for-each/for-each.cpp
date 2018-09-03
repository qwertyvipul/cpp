#include<iostream>
using namespace std;

int main(){
	
	int array[] = {11, 22, 33, 44, 55};
	for(int num : array){
		cout<<num<<endl;
	}
	
	for(int num : {66, 77, 88, 99}){
		cout<<num<<endl;
	}
	return 0;
}
