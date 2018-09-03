#include<iostream>
using namespace std;

class Ram{
private:
	void intro(){
		cout<<"My Name is Ram."<<endl;
	}

public:
	Ram(){
		cout<<"Ram class created!"<<endl;
	}
	
	friend class Shyam;
};

class Shyam{
public:
	void intro(){
		cout<<"My Name is Shyam."<<endl;
	}
	
	void shyamFriend(Ram ram){
		cout<<"Here is Shyam's friend - ";
		ram.intro();
	}
	
	Shyam(){
		cout<<"Shyam class created!"<<endl;
	}
};

int main(){
	Ram ram;
	Shyam shyam;
	shyam.shyamFriend(ram);
	return 0;
}
