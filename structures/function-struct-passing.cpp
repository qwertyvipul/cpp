#include<iostream>
#include<cstring>
using namespace std;

struct numword{
	int num;
	string word;
};

void assign(numword *nw, int num, string word){
	nw->num = num;
	nw->word = word;
}

void display(numword *nw){
	cout<<nw->num<<" -> "<<nw->word<<endl;
}

int main(){
	numword *nw = new numword;
	assign(nw, 1, "one");
	display(nw);
	return 0;
}
