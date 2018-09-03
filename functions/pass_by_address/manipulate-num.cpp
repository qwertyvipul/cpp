#include<iostream>
using namespace std;

void manipulate(int* num){
	*num = 23;
}

int main(){
	int num = 22;
	cout<<"Original - "<<num<<endl;
	manipulate(&num);
	cout<<"After Manipulation - "<<num<<endl;
	return 0;
}
