#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
class Complex{
public:
	T x;
	T y;
	
	void print(){
		cout<<"X = "<<x<<"; Y = "<<y<<endl;
	}
	
	Complex(T x, T y){
		this->x = x;
		this->y = y;
	}
};

int main(){
	Complex<int> c1(10, 20);
	Complex<string> c2("one", "two");
	c1.print();
	c2.print();
	return 0;
}
