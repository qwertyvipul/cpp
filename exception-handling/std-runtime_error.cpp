#include<iostream>
#include<stdexcept>
using namespace std;

/*
bad_alloc
bad_cast
logic_failure
bad_typeid
bad_exception
runtime_error - 
	domain_error
	invalid_argument
	length_error
	out_of_range
	overflow_error
	range_error
	underflow_error
*/
int main(){
	int a = 10;
	int b = 0;
	int c;
	try{
		if(b == 0) throw runtime_error("divide by zero!");
		c = a/b;
	}catch(runtime_error &e){
		cout<<"Exception occured: "<<e.what()<<endl;
	}
	return 0;
}
