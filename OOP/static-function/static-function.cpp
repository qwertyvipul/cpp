#include<iostream>
using namespace std;

class Fruit{
public:
	static int fruit_count;
	
	/*
	Static function can only use static variables
	*/
	static int fruitCount(){
		return fruit_count;
	}
	
	static void printFruitCount(){
		cout<<"Fruit Count = "<<fruit_count<<endl;
	}
	
	Fruit(){
		fruit_count++;
	}
};

int Fruit::fruit_count = 0;
int main(){
	
	Fruit::printFruitCount();
	Fruit f1;
	Fruit::printFruitCount();
	return 0;
}
