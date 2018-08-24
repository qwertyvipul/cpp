#include<iostream>
#include "fileH.h"

using namespace std;

int main(){
	globalVar = 5;
	int globalVar2 = globalFunc(globalVar);
	cout<<globalVar2;
}

