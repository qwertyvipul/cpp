#include<iostream>
using namespace std;

void count(){
	static int counter = 0;
	cout<<"Counter = "<<++counter<<endl;
}

int main(){
	count();
	count();
	count();
	return 0;
}
