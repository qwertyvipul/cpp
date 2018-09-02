#include<iostream>
#include<exception>
using namespace std;

int main(){
	int a = 10;
	int b = 0;
	int c;
	try{
		if(b == 0) throw "divide by zero error.";
		c = a/b;
	}catch(const char *e){
		cout<<"Exception occured: "<<e<<endl;
	}
	return 0;
}
