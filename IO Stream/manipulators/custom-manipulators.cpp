#include<iostream>
#include<cstring>
using namespace std;

istream &getName(istream &input){
	cout<<"Enter your name: ";
	return input;
}

ostream &rightArrow(ostream &output){
	cout<<" --> ";
	return output;
}

int main(){
	string name;
	cin>>getName>>name;
	cout<<"Your name is: "<<rightArrow<<name<<endl;
	return 0;
}
