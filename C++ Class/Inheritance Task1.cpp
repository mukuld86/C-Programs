/* write a program with two classes Vehicle as a base class and Car as a derived class, which inherits properties from the vehicle class for calculating the speed.
	The base class fetches the input as a float value, whereas the derived class calculates and prints the output as a float value
*/
#include<iostream>
#include<iomanip>
using namespace std;
class vehicle{
	public:
		float distance;
		float time;
		void get_info(){
			cout<<"Enter the distance: ";
			cin>>distance;
			cout<<"Enter the time taken: ";
			cin>>time;
		}
};
class car:public vehicle{
	private:
		float speed;
	public:
		void calculate(){
			get_info();
			speed=distance/time;
		}
		void display(){
			cout<<"Speed is "<<fixed<<setprecision(2)<<speed<<" Km/hr\n";
		}
};

int main(){
	car obj1;
	obj1.calculate();
	obj1.display();
	return 0;
}
