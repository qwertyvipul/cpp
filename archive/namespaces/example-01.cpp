namespace geo{
	const double PI = 3.14159;
	double circumference(double radius){
		return 2*PI*radius;
	}
}

#include<iostream>
using namespace std;

int main(){
	double c = geo::circumference(10);
	cout<<c<<endl;
	
	using namespace geo;
	c = circumference(20);
	cout<<c<<endl;
	
	return 0;
}
