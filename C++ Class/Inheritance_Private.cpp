#include<iostream>
using namespace std;

class student{
	private:
		int roll_no;
	protected:
		char section[10];
	public:
		void get_rno(){
			cout<<"Enter the roll number: ";
			cin>>roll_no;
		}
		void show_rno(){
			cout<<"\nRoll no.: "<<roll_no;
		}
};
class result: private student{
	private:
		float fees;
	public:
		void get_data(){
			get_rno();
			cout<<"\nEnter fees: ";
			cin>>fees;
			cout<<"\nEnter section: ";
			cin>>section;
		}
		void display(){
			show_rno();
			cout<<"\nFees: "<<fees;
			cout<<"\nSection: "<<section;
		}
};

int main(){
	result obj1;
	obj1.get_data();
	obj1.display();

	// below lines of code won't work!
	//obj1.get_rno();		// get_rno() is now private member function for the result class
	//obj1.show_rno();		// show_rno() is now private member function for the result class
	//obj1.roll_no=78;		// roll_no is now private data member for the result class
	return 0;
}
