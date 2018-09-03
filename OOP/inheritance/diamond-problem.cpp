#include<iostream>
using namespace std;

class A{
public:	
	void print(){
		cout<<"This is class A."<<endl;
	}
	
	A(){
		cout<<"Class A created!"<<endl;
	}
};

class B : virtual public A{
public:
	
	B(){
		cout<<"Class B created!"<<endl;
	}
};

class C : virtual public A{
public:
	
	C(){
		cout<<"Class C created!"<<endl;
	}
};

class D : virtual public B, virtual public C{
public:
	
	D(){
		cout<<"Class D created!"<<endl;
	}
};

int main(){
	D d;
	d.print();
	
	return 0;
}


