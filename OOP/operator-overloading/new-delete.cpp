#include<iostream>
#include<cstdlib>
#include<stdexcept>
using namespace std;

class Person{
	string name;
	int age;
public:
	void intro(){
		cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
	}
	
	void *operator new(size_t size){
		void *pointer;
		cout<<"Overloaded new - size is "<<size<<"."<<endl;
		pointer = malloc(size);
		if(!pointer){
			bad_alloc ba;
			throw ba;
		}
		return pointer;
	}
	
	void operator delete(void *pointer){
		cout<<"Overloaded delete operator."<<endl;
		free(pointer);
	}
	
	Person(){
		age = 0;
		name = "No Name";
	}
	
	Person(int age, string name){
		this->age = age;
		this->name = name;
	}
};

int main(){
	Person *p;
	try{
		p = new Person(24, "Rahul");
		p->intro();
		delete p;
	}catch(bad_alloc ba){
		cout<<ba.what()<<endl;
	}
	return 0;
}
