#include<iostream>
#include<cstring>
using namespace std;

class Person{
public:
	string name;
	int age;
	
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
	student.name = "Rahul";
	student.age = 20;
	student.roll = 101;
	student.intro();
	return 0;
}
