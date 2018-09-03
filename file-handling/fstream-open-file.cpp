#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream file;
	file.open("new-file.txt", ios::in | ios::out | ios::trunc);
	if(!file.is_open()){
		cout<<"Failed to open the file."<<endl;
	}else{
		cout<<"File opened successfully!"<<endl;
		file.close();
	}
	return 0;
}
