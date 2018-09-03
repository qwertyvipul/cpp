#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	//endl is a manipulator
	cout<<"Hello World!"<<endl;
	cout<<setw(12)<<setfill('*')<<"Awesome!"<<endl;
	return 0;
}
