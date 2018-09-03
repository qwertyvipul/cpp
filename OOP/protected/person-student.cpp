#include<iostream>
#include<cstring>
using namespace std;

class Person{
/*
protected variables and functions are accessible to the sub-classes.
*/
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

class Student : public Person{
public:
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
	student.set_name("Rahul");
	student.set_age(20);
	student.roll = 101;
	student.intro();
	return 0;
}
