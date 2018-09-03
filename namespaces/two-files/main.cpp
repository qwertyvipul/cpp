#include<iostream>
using namespace std;
#include "file-one.cpp";
#include "file-two.cpp";

int main(){
	one::print();
	two::print();
	return 0;
}
