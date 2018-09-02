#include<iostream>
#include<cstring>
using namespace std;

struct numinwords{
	int num;
	string words;
}one, two;

int main(){
	numinwords three, four;
	three.num = 3;
	three.words = "Three";
	
	four.num = 4;
	four.words = "Four";
	
	one.num = 1;
	one.words = "One";
	
	two.num = 2;
	two.words = "Two";
	
	cout<<one.num<<" - "<<one.words<<endl;
	cout<<two.num<<" - "<<two.words<<endl;
	cout<<three.num<<" - "<<three.words<<endl;
	cout<<four.num<<" - "<<four.words<<endl;
	
	return 0;
}
