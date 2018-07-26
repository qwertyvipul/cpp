#include<iostream>
using namespace std;
const int MAX = 100;

template<class T>
class Stack{
	private:
		T list[MAX];
		int top;
		
	public:
		Stack(){
			top = -1;
		}
		void push(T var){
			list[++top] = var;
		}
		T pop(){
			return list[top--];
		}
};

int main(){
	Stack<float> stack;
	stack.push(1111.1F);
	stack.push(2222.2F);
	stack.push(3333.3F);
	
	cout<<"STACK-1"<<endl;
	cout<<stack.pop()<<endl;
	cout<<stack.pop()<<endl;
	
	Stack<float> stack2;
	stack2.push(1234L);
	stack2.push(4567L);
	
	cout<<"STACK-2"<<endl;
	cout<<stack2.pop()<<endl;
	cout<<stack2.pop()<<endl;
	
	return 0;
}
