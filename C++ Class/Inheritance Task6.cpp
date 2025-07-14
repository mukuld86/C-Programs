#include<iostream>
using namespace std;

class Vehicle{
	public:
		float distance;
		float time;
		void set_details(){
			cout<<"Enter distance: ";
			cin>>distance;
			cout<<"Enter time: ";
			cin>>time;
		}
};
class Car: public Vehicle{
	float speed;
	public:
		Car(){
			set_details();
		}
		void calculate(){
			speed=distance*1.0/time;
		}
		void display(){
			cout<<"Speed of car: "<<speed<<" km/hr"<<endl;
		}
};
int main(){
	Car car1;
	car1.calculate();
	car1.display();
	
	return 0;
}
