#include<iostream>
#include<exception>
using namespace std;

class Overspeed : public exception{
	int speed;
public:
	const char* what(){
		return "You are over speeding.";
	}
	
	int getSpeed(){
		return speed;
	}
	
	void setSpeed(int speed){
		this->speed = speed;
	}
};

class Car{
	int speed;
public:
	void setSpeed(int speed){
		this->speed = speed;
		cout<<"Your speed is: "<<speed<<endl;
	}
	
	void accelerate(){
		for(;;){
			speed+=10;
			cout<<"Your speed is: "<<speed<<endl;
			if(speed>=250){
				Overspeed s;
				s.setSpeed(speed);
				throw s;
			}
		}
	}
};

int main(){
	Car car;
	car.setSpeed(10);
	try{
		car.accelerate();
	}catch(Overspeed s){
		cout<<s.what()<<endl;
	}
	return 0;
}
