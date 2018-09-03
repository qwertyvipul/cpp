#include<iostream>
using namespace std;

namespace app_version{
	namespace version1{
		void print_version(){
			cout<<"This is the app version-1."<<endl;
		}
	}
	
	namespace version2{
		void print_version(){
			cout<<"This is the app version-2."<<endl;
		}
	}
	
	inline namespace version3{
		void print_version(){
			cout<<"This is the app version-3."<<endl;
		}
	}
}

int main(){
	app_version::print_version();
	app_version::version1::print_version();
	return 0;
}
