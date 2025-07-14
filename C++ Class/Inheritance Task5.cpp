/*	Make a class named fruit with a data member to calculate the number of fruits in a basket. Create two other classes named Appled and 
	Mangoes to calculate the number of apples and mangoes in the basket. Print the number of fruits of each type and the total number of fruits 
	in the basket.
*/

#include<iostream>
using namespace std;
class Apples{
	protected:
		int apples;
	public:
		void get_apples(int x){
			apples=x;
		}
		void put_apples(){
			cout<<"Number of apples= "<<apples<<endl;
		}
};
class Mangoes{
	protected:
		int mangoes;
	public:
		void get_mangoes(int x){
			mangoes=x;
		}
		void put_mangoes(){
			cout<<"Number of mangoes= "<<mangoes<<endl;
		}
};
class Fruit:public Apples,public Mangoes{
	protected:
		int total;
	public:
		void get_total(){
			int app,man;
			cout<<"Enter number of Apples: ";
			cin>>app;
			get_apples(app);
			cout<<"Enter number of Mangoes: ";
			cin>>man;
			get_mangoes(man);
			total=apples+mangoes;
		}
		void display(){
			cout<<"\n\nNo. of Apples: "<<apples<<endl;
			cout<<"No. of Mangoes: "<<mangoes<<endl;
			cout<<"Total number of fruits: "<<total<<endl;
		}
		
};
int main(){
	Fruit sample1;
	sample1.get_total();
	sample1.display();
}
