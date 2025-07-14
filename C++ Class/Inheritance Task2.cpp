/* create a program having class name student having data members subject1, sub2, sub3, sub4, sub5. using any function get the values of these, 
then create a child class as d1 and calculate the total of the subjects.
create one more class from the d1 class and calculate the percentage and display accordingly
*/
#include<iostream>
using namespace std;
class Student{
	public:
		int sub1, sub2, sub3, sub4, sub5;
		void get_marks(){
			cout<<"Enter marks of five subjects: ";
			cin>>sub1>>sub2>>sub3>>sub4>>sub5;
		}
};
class d1:public Student{
	public:
		int total;
		void calculate_total(){
			total=sub1+sub2+sub3+sub4+sub5;
		}
};
class d2: public d1{
	public:
		double percentage;
		void calculate_percentage(){
			percentage=((double)(total/500.0)*100);
		}
		void display(){
			cout<<"Percentage is "<<percentage<<endl;
		}
};
int main(){
	d2 obj;
	obj.get_marks();
	obj.calculate_total();
	obj.calculate_percentage();
	obj.display();
	return 0;
}
