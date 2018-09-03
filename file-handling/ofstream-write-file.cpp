#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream file;
	file.open("new-file.txt");
	if(!file.is_open()){
		cout<<"Failed to open the file."<<endl;
	}else{
		file<<"This is line - 1."<<endl;
		file<<"This is line - 2."<<endl;
		cout<<"File created successfully!"<<endl;
		file.close();
	}
	return 0;
}
