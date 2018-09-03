#include<iostream>
using namespace std;

int main(){
	cout<<"Width set to 10: "<<endl;
	cout.width(10);
	cout<<355<<endl;
	cout.width(10);
	cout<<"Rahul"<<endl;
	cout<<"Hey this is Ram."<<endl;
	
	cout<<"\nFill * instead blank: "<<endl;
	cout.fill('*');
	cout.width(10);
	cout<<355<<endl;
	cout.width(10);
	cout<<"Rahul"<<endl;
	
	cout<<"\nLeft: "<<endl;
	cout.setf(ios::left);
	cout.width(10);
	cout<<355<<endl;
	cout.width(10);
	cout<<"Rahul"<<endl;
	
	return 0;
}
