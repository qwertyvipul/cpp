#include<iostream>
using namespace std;

class Complex{
public:
	int x;
	int y;
	int id;
	
	void operator+=(Complex c){
		x = x + c.x;
		y = y + c.y;
	}
	
	void operator+=(int num){
		x = x + num;
	}
	
	void operator-=(Complex c){
		x = x - c.x;
		y = y - c.y;
	}
	
	void operator-=(int num){
		x = x - num;
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
	c1 += c2;
	c1.print();
	c1 -= 23;
	c1.print();
	return 0;
}
