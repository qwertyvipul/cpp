#include<iostream>
using namespace std;

int getval(const int num){
	/*
	the line num = num+1
	gives assignment of read-only parameter error
	*/
	//num = num+1;
	return num;
}

int main(){
	int num = 20;
	int newnum = getval(num);
	cout<<newnum<<endl;
	return 0;
}
