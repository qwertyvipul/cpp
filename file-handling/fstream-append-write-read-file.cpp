#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream file;
	file.open("new-file.txt", ios::in | ios::out | ios::app);
	if(!file.is_open()){
		cout<<"Failed to open the file."<<endl;
	}else{
		cout<<"File opened successfully!"<<endl;
		cout<<"Writing to the file..."<<endl;
		file<<"This is a new line."<<endl;
		
		cout<<"Reading from the file..."<<endl;
		string line;
		file.seekg(0);
		while(file.good()){
			getline(file, line);
			cout<<line<<endl;
		}
		file.close();
	}
	return 0;
}
