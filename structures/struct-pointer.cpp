#include<iostream>
#include<cstring>
using namespace std;

struct numword{
	int num;
	string word;
};

int main(){
	numword* one = new numword;
	one->num = 1;
	one->word = "one";
	cout<<one->num<<" -> "<<one->word<<endl;
	return 0;
}
