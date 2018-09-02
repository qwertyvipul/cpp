#include<iostream>
#include<cstring>
using namespace std;

class Person{
protected:
	string name;
	int age;

public:
	void set_name(string name){
		this->name = name;
	}
	void set_age(int age){
		this->age = age;
	}
	Person(){
		cout<<"Person class created!"<<endl;
	}
};

class Student : private Person{
public:
	/*
	private variables of person class will now act as public
	*/
	Person::name;
	Person::age;
	int roll;
	
	void intro(){
		cout<<"My name is "<<name<<". I am "<<age<<" years old."<<endl;
	}
	
	Student(){
		cout<<"Student class created!"<<endl;
	}
};

int main(){
	Student student;
	student.name = "Rahul";
	student.age = 20;
	student.roll = 101;
	student.intro();
	return 0;
}
