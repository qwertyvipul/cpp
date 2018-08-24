#include<iostream>
using namespace std;

int main(int argnum, char* args[]){
	cout<<"Number of arguments = "<<argnum<<endl;
	
	for(int j=0; j<argnum; j++){
		cout<<"Argument - "<<j<<" = "<<args[j]<<endl;
	}
	return 0;
}
