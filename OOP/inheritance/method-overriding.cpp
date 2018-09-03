#include<iostream>
using namespace std;

class Base{
public:
	void print(){
		cout<<"This is base class."<<endl;
	}
};

class Derived : public Base{
public:
	void print(){
		cout<<"This is derived class."<<endl;
	}
};

void letsprint(Base &b){
	b.print();
}

int main(){
	Derived d;
	d.print();
	d.Base::print();
	letsprint(d);
	return 0;
}
