#include<iostream>
using namespace std;

void show(int *pointer){
	if(pointer != NULL)
		cout<<"Value = "<<*pointer<<endl;
	else
		cout<<"Dangling Pointer!"<<endl;
}

int main(){
	int *pointer = NULL;
	pointer = new int;
	*pointer = 20;
	show(pointer);
	delete pointer;
	pointer = NULL; //to avoid dagling pointer reference
	show(pointer);
	return 0;
}
