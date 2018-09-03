#include<iostream>
#include<cstring>
using namespace std;

class Person{
public:
	string name;
	int age;
	
	void intro(){
		cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
	}
	
	/*
	This is the copy constructor.
	*/
	Person(const Person &p){
		cout<<"Copy constructor is called."<<endl;
		name = p.name;
		age = p.age;
	}
	
	Person(string name, int age){
		this->age = age;
		this->name = name;
	}
};

int main(){
	Person p1("Person-1", 24);
	p1.intro();
	Person p2 = p1;
	p1.intro();
	p2.intro();
	p2.name = "Person-2";
	p2.age = 32;
	p1.intro();
	p2.intro();
	return 0;
}
