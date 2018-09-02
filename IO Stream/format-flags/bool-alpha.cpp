#include<iostream>
using namespace std;

int main(){
	cout<<"Displaying the boolean name: "<<endl;
	cin.setf(ios::boolalpha);
	cout.setf(ios::boolalpha);
	cout<<"Enter boolean value: ";
	bool val = true;
	cin>>val;
	cout<<val<<endl;
	return 0;
}
