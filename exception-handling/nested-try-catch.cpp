#include<iostream>
#include<exception>

using namespace std;

int main(){
	try{
		try{
			throw "exception in inner block.";
		}catch(const char *e){
			cout<<"Inner catch: "<<e<<endl;
			throw "inner catch threw exception.";
		}
	}catch(const char *e){
		cout<<"Outer catch: "<<e<<endl;
	}
	return 0;
}
