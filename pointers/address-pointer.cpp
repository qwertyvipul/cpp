#include<iostream>
using namespace std;

int main(){
	int age = 20;
	bool human = true;
	
	int* ageptr;
	bool* humanptr;
	ageptr = &age;
	humanptr = humanptr;
	
	cout<<age<<" --> "<<ageptr<<" --> "<<*ageptr<<endl;
	cout<<human<<" --> "<<humanptr<<" --> "<<*humanptr<<endl;
	
	return 0;
}
