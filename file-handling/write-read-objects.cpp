#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Person{
public:
	int age;
	char name[100];
	
	void intro(){
		cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
	}
	
	Person(){
		age = 0;
		strcpy(name, "No Name");
	}
	
	Person(char* name, int age){
		strcpy(this->name, name);
		this->age = age;
	}
};

int main(){
	
	Person p1("Person-1", 22);
	Person p2;
	
	fstream file;
	file.open("person.bin", ios::binary | ios::in | ios::out | ios::trunc);
	if(!file.is_open()){
		cout<<"Failed to open the file."<<endl;
	}else{
		file.write((char*)&p1, sizeof(Person));
		file.seekg(0);
		file.read((char*)&p2, sizeof(Person));
		file.close();
	}
	p2.intro();
	return 0;
}
