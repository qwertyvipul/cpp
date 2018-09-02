#include<iostream>
#include<cstring>
using namespace std;

union numword{
	int num;
	int next;
};

int main(){
	numword *nw = new numword;
	nw->num = 1;
	nw->next = 2;
	cout<<nw->num<<endl;
}
