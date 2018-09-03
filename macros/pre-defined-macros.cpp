#include<iostream>
using namespace std;

int main(){
	cout<<"__LINE__: "<<__LINE__<<endl;
	cout<<"__FILE__: "<<__FILE__<<endl;
	cout<<"__DATE__: "<<__DATE__<<endl;
	cout<<"__TIME__: "<<__TIME__<<endl;
	cout<<"__STDC__: "<<__STDC__<<endl;
	cout<<"__cplusplus: "<<__cplusplus<<endl;
	
	#line 1000 "new-name.txt"
	cout<<"Changed __LINE__: "<<__LINE__<<endl;
	cout<<"Changed __FILE__: "<<__FILE__<<endl;
	return 0;
}
