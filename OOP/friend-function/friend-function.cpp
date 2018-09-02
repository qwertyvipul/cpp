#include<iostream>
using namespace std;

class Fruit{
private:
	static int fruit_count;
	
	static void printFruitCount(){
		cout<<"Fruit Count = "<<fruit_count<<endl;
	}
	
	/*
	Friend function is accessible by main
	*/
	friend int friendFruitCount(Fruit f){
		return f.fruit_count;
	}
	
	public: Fruit(){
		fruit_count++;
	}
};

int Fruit::fruit_count = 0;
int main(){
	Fruit f;
	cout<<friendFruitCount(f)<<endl;
	return 0;
}
