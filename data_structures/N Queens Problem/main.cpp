//using backtracking
#include<iostream>
#include<stdlib.h>
using namespace std;
#include "solution_tree.cpp"
#include "node_list.cpp"
#include "nqueen.cpp"

int main(){
	int n;
	cout<<"Enter the number of queens: "; cin>>n;
	NQueen nqueen(n);
	nqueen->solve();
}
