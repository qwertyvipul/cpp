#include<iostream>
#include<cstring>
using namespace std;

template<typename T1, typename T2>
void print(T1 t1, T2 t2){
	cout<<"My name is "<<t1<<" and I am "<<t2<<" years old."<<endl;
}

int main(){
	string name = "Rahul";
	int age = 10;
	print(name, age);
	return 0;
}
