#include<iostream>
using namespace std;
class Apples{
	protected:
		int number_apples;
	public:
		void get(){
			int x;
			cout<<"Enter number of apples: ";
			cin>>x;
			number_apples=x;
		}
};
class Mangoes{
	protected:
		int number_mangoes;
	public:
		void get(){
			int x;
			cout<<"Enter number of mangoes: ";
			cin>>x;
			number_mangoes=x;
		}
};
class Fruit: public Apples, public Mangoes{
	protected:
		int total;
	public:
		void calculate(){
			Apples::get();
			Mangoes::get();
			total = number_apples + number_mangoes;
		}
		void display(){
			cout<<"Number of Mangoes = "<<number_mangoes<<endl;
			cout<<"Number of Apples = "<<number_apples<<endl;
			cout<<"Total number of fruits: "<<total<<endl;
		}
};
int main(){
	Fruit f1;
	f1.calculate();
	f1.display();
	return 0;
}
