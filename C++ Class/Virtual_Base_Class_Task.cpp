#include<iostream>
using namespace std;
class student{
	protected:
		int id;
	public:
		void get_id(int n){
			id=n;
		}
};
class testmarks: public virtual student{
	protected:
		float marks1, marks2;
	public:
		void get_marks(float a, float b){
			marks1=a;
			marks2=b;
		}
};
class sportsmarks: public virtual student{
	protected:
		float PE_score;
	public:
		void get_score(float x){
			PE_score=x;
		}
};
class result: public testmarks, public sportsmarks{
	protected:
		float total;	
	public:
		void calculate_total(){
			total = marks1 + marks2 + PE_score;
		}
		void display(){
			cout<<"\nTotal: "<<total<<endl;
		}
};
int main(){
	int id;
	float marks1, marks2, pe_score;
	cout<<"Enter id: ";
	cin>>id;
	cout<<"Enter marks1 and marks2: ";
	cin>>marks1>>marks2;
	if(marks1>100 || marks2>100){
		cout<<"Marks out of range!";
		return 1;
	}
	cout<<"Enter score: ";
	cin>>pe_score;
	if(pe_score>100){
		cout<<"Score out of range!";
		return 1;
	}
	result obj;
	obj.get_id(id);
	obj.get_marks(marks1, marks2);
	obj.get_score(pe_score);
	obj.calculate_total();
	obj.display();
	
	return 0;
}
