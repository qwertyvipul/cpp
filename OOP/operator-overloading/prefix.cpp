#include<iostream>
using namespace std;

class Complex{
public:
	int x;
	int y;
	int id;
	
	void operator++(){
		x+=1;
		y+=1;
	}
	
	void operator--(){
		x-=1;
		y-=1;
	}
	
	void print(){
		cout<<"X = "<<x<<"; Y = "<<y<<endl;
	}
	
	Complex(){
		x = 0;
		y = 0;
		id = 0;
	}
	
	Complex(int x, int y, int id){
		this->x = x;
		this->y = y;
		this->id = id;
	}
};

int main(){
	Complex c1(10, 20, 1);
	Complex c2(22, 33, 2);
	++c1;
	c1.print();
	--c2;
	c2.print();
	return 0;
}
