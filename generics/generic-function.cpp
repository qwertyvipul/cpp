#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
void print(T t){
	cout<<t<<endl;
}

int main(){
	int num = 10;
	string str = "This is a string.";
	print(num);
	print(str);
	return 0;
}
