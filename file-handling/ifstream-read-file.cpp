#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream file;
	file.open("new-file.txt");
	if(!file.is_open()){
		cout<<"Failed to open the file."<<endl;
	}else{
		cout<<"Reading the contents of the file:"<<endl;
		string line;
		while(file.good()){
			getline(file, line);
			cout<<line<<endl;
		}
		cout<<"File read successfully!"<<endl;
		file.close();
	}
	return 0;
}
