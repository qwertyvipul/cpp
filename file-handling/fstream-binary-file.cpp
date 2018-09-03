#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){
	fstream file;
	file.open("new-file.bin", ios::binary | ios::in | ios::out | ios::app);
	char input[100];
	strcpy(input, "This is a binary file.");
	if(!file.is_open()){
		cout<<"Failed to open the file."<<endl;
	}else{
		cout<<"File opened successfully!"<<endl;
		cout<<"Writing to the file..."<<endl;
		for(int i=0; i<strlen(input); i++){
			file.put(input[i]);
		}
		
		cout<<"Reading from the file..."<<endl;
		char ch;
		file.seekg(0);
		while(file.get(ch) && file.good()){
			cout<<ch;
		}
		file.close();
	}
	return 0;
}
