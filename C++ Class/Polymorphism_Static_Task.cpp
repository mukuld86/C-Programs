/*	write a program to create a class student having function name get_data and ask for roll no and reg. no.	Create a second function with the 
	same name get_data and ask for name and city. Create another function and ask for marks 1-5
	*/
#include<iostream>
#include<string>
using namespace std;
class student{
	int roll_no, reg_no;
	string name, city;
	double m1, m2, m3, m4, m5;
	public:
		void get_data(int a, int b){
			roll_no = a;
			reg_no = b;
		}
		void get_data(string a, string b){
			name = a;
			city = b;
		}
		void get_data(double a, double b, double c, double d, double e){
			m1 = a; m2 = b; m3 = c; m4 = d;	m5 = e;
		}
		void display(){
			cout << "\n\nRoll no.: " << roll_no << endl;
			cout << "Registration No.: " << reg_no << endl;
			cout << "Name: " << name << endl;
			cout << "City: " << city << endl;
			cout << "Marks1: " << m1 << endl << "Marks2: " << m2 << "Marks3: " << m3 << endl << "Marks4: " << m4 << endl << "Marks5: " << m5 << endl;			
		}
};
int main(){
	int roll_no, reg_no;
	string name, city;
	double m1, m2, m3, m4, m5;
	cout << "Enter roll no.: ";
	cin >> roll_no;
	cout << "Enter registration no: ";
	cin >> reg_no;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter city name: ";
	cin >> city;
	cout <<"Enter marks for five subjects: ";
	cin >> m1 >> m2 >> m3 >> m4 >> m5;
	
	student s1;
	s1.get_data(roll_no, reg_no);
	s1.get_data(name, city);
	s1.get_data(m1, m2, m3, m4, m5);
	s1.display();
	
	return 0;	
}
