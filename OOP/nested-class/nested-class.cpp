#include<iostream>
using namespace std;

class Outer{
public:
	int onum;
	class Inner{
	public:
		int inum;
		Inner(){
			cout<<"Inner class created!"<<endl;
		}
		
		void print(){
			cout<<"Inner num = "<<inum<<endl;
		}
	};
	
	Inner inner;
	void print(){
		cout<<"Outer num = "<<onum<<" and Inner num = "<<inner.inum<<"."<<endl;
	}
	
	Outer(){
		cout<<"Outer class created!"<<endl;
	}
	
};

int main(){
	Outer outer;
	outer.onum = 10;
	outer.inner.inum = 20;
	outer.print();
	Outer::Inner inner;
	inner.inum = 33;
	inner.print();
	return 0;
}
