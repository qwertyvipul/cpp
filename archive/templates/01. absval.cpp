/*
Imagine you can use the same function with different datatypes without rewriting it for each one
*/

#include<iostream>
using namespace std;

template <class T>
/*
Template function is a specific instance of a function template. Isn't English fun?
*/
T abs(T n){
	return (n<0)?-n:n;
}

int main(){
	cout<<abs(-80L);
	return 0;
}
