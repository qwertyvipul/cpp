#include<iostream>
using namespace std;

int main(){
	cout.setf(ios :: showpos | ios :: showpoint);
	cout<<"showpos: "<<endl;
	cout<<100<<endl;
	cout<<-65<<endl;
	cout<<22<<endl;
	cout<<"\nshowpoint: "<<endl;
	cout<<-65.32<<endl;
	cout<<100.2<<endl;
	cout.unsetf(ios :: showpos);
	cout<<"\nunset showpos: "<<endl;
	cout<<100<<endl;
	cout<<-65<<endl;
	cout<<22<<endl;
	
	/*
	auto flag = ios::showpos | ios::showpoint | ios::showbase;
	cout.flags(flag);
	cout<<"\n Flags: "<<endl;
	cout<<100<<endl;
	cout<<67.8<<endl;
	cout<<-23<<endl;
	*/
	
}
