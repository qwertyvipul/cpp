#include<iostream>
#include<cstring>
using namespace std;

template<typename T1 = int, typename T2 = string>
class NumWord{
public:
	T1 num;
	T2 word;
	
	void print(){
		cout<<"NUM = "<<num<<endl<<"WORD = "<<word<<endl;
	}
	
	NumWord(T1 num, T2 word){
		this->num = num;
		this->word = word;
	}
};

int main(){
	NumWord<> n1(10, "ten");
	NumWord<int, int> n2(10, 20);
	n1.print();
	n2.print();
	return 0;
}
