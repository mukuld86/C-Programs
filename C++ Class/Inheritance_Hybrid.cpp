#include<iostream>
using namespace std;
class student{
	protected:
		int roll_number;
	public:
		void get_number(int a){
			roll_number=a;
		}
		void put_number(){
			cout<<"Roll No.: "<<roll_number<<endl;
		}
};
class test: public student{
	protected:
		float part1, part2;
	public:
		void get_marks(float x, float y){
			part1=x;
			part2=y;
		}
		void put_marks(){
			cout<<"Part1= "<<part1<<"\nPart2= "<<part2<<endl;
		}
};
class sports{
	protected:
		float score;
	public:
		void get_score(float s){
			score=s;
		}
		void put_score(){
			cout<<"Score= "<<score<<endl<<endl;
		}
};
class result: public test, public sports{
	float total;
	public:
		void display();
};
void result::display(){
	total = part1 + part2 + score;
	put_number();
	put_marks();
	put_score();
	cout<<"Total score: "<<total<<endl;
}
int main(){
	result s1;
	s1.get_number(1234);
	s1.get_marks(27.5,33.2);
	s1.get_score(6.6);
	s1.display();
	return 0;
}
