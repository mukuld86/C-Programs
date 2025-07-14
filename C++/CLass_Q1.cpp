// write a program to create a class Student having data members name, roll_no and cgpa. And two member functions getData and displayData, defining the definition of these member functions outside the class

#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int roll_no;
		float cgpa;
	public:
			void getData(string a,int b,float c);
			void displayData(void);
};
void Student::getData(string a,int b,float c)
{
	name=a;
	roll_no=b;
	cgpa=c;
}
void Student::displayData()
{
	cout<<"\nName: "<<name<<endl;
	cout<<"Roll No: "<<roll_no<<endl;
	cout<<"CGPA: "<<cgpa<<endl;
}

int main()
{
	string name;
	int rno;
	float cgpa;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter roll no: ";
	cin>>rno;
	cout<<"Enter CGPA: ";
	cin>>cgpa;

	Student Me;
	Me.getData(name,rno,cgpa);
	Me.displayData();
	
	return 0;
}

