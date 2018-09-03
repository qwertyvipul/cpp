#include<iostream>
#include<sstream>
#include<cstring>

using namespace std;

int main(){
	string num = "123";
	stringstream ss;
	ss<<num;
	int newnum;
	ss>>newnum;
	newnum += newnum;
	cout<<newnum;
	return 0;
}
