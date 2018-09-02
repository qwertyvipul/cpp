#include<iostream>
#include<cstring>
using namespace std;

class Person{
	string name;
	int age;
public:
	void intro(){
		cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
	}
	
	
	friend istream &operator >>(istream &input, Person &p){
		cout<<"Enter the age: "; 
		input>>p.age;
		cout<<"Enter the name: "; 
		input>>p.name;
		return input;
	}
	
	friend ostream &operator <<(ostream &output, Person &p){
		output<<"My name is "<<p.name<<" and I am "<<p.age<<" years old."<<endl;
		return output;
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
	Person p;
	cin>>p;
	cout<<p;
	return 0;
}
