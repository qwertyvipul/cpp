#include<iostream>
using namespace std;

class Complex{
public:
	int x;
	int y;
	int id;
	
	Complex operator++(int){
		Complex duplicate(*this);
		x+=1;
		y+=1;
		return duplicate;
	}
	
	Complex operator--(int){
		Complex duplicate(*this);
		x-=1;
		y-=1;
		return duplicate;
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
	c1++.print();
	c1.print();
	return 0;
}
