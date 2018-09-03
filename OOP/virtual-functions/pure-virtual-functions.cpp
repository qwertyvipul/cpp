#include<iostream>
using namespace std;

class A{
public:
	virtual void print() = 0;
};

class B : public A{
public:
	void print(){
		cout<<"This is class B."<<endl;
	}
};

class C : public A{
public:
	void print(){
		cout<<"This is class C."<<endl;
	}
};

class D : public C{
public:
	void print(){
		cout<<"This is class D."<<endl;
	}
};

void letsprint(A &a){
	a.print();
}

int main(){
	B b;
	letsprint(b);
	C c;
	letsprint(c);
	D d;
	letsprint(d);
	return 0;
}
