#include<iostream>
#include<stdexcept>

using namespace std;

int main(){
	int a = 10;
	int b = 0;
	
	try{
		if(b==0) throw "divide by zero error.";
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
