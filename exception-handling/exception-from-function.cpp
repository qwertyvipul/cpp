#include<iostream>
#include<stdexcept>

using namespace std;

void test() throw(int, runtime_error){
	throw runtime_error("runtime error.");
	return;
}

int main(){
	
	try{
		test();
	}catch(const char* e){
		cout<<"Error occured: "<<e<<endl;
	}catch(int e){
		cout<<"Error occured: "<<e<<endl;
	}catch(runtime_error &e){
		cout<<"Error occured: "<<e.what()<<endl;
	}catch(...){
		cout<<"Some unknown error occured!"<<endl;
	}
	return 0;
}
