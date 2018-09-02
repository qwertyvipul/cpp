#include<iostream>
using namespace std;

class Complex{
public:
	int x;
	int y;
	
	Complex* operator->(){
		return this;
	}
	
	void print(){
		cout<<"X = "<<x<<"; Y = "<<y<<endl;
	}
	
	Complex(int x, int y){
		cout<<"Constructor is called!"<<endl;
		this->x = x;
		this->y = y;
	}
};

int main(){
	Complex c1(10, 20);
	c1->print();
	return 0;
}
