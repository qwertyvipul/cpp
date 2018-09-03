#include<iostream>
#include<cstring>
using namespace std;

class Person{
public:
	string name;
	int age;
	
	Person(string name, int age){
		cout<<"Person class created!"<<endl;
		this->name = name;
		this->age = age;
	}
};

class Student : public Person{
public:
	int roll;
	
	void intro(){
		cout<<"My name is "<<name<<". I am "<<age<<" years old."<<endl;
	}
	
	Student(string name, int age, int roll) : Person(name, age){
		cout<<"Student class created!"<<endl;
		this->roll = roll;
	}
};

int main(){
	Student student("Rahul", 20, 101);
	student.intro();
	return 0;
}
