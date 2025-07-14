//write a program to create union named as student having members rollno name and cgpa. Then store the record of five students using array of union
#include<iostream>
using namespace std;
union Student
{
	int rollno;
	char name[20];
	float cgpa;;
};

int main()
{
	Student data[5];
	for(int i=0;i<5;i++)
	{
		cout<<"For Student "<<i+1<<endl;
		cout<<"Enter rollno: ";
		cin>>data[i].rollno;
		cout<<"Enter name: ";
		cin.get(data[i].name,20);
		cout<<"Enter CGPA: ";
		cin>>data[i].cgpa;
	}
	

	cout<<"Students Details:\n\n";
	for(int i=0;i<5;i++)
	{
		cout<<"Student "<<i+1<<endl;
		cout<<"RollNo.: "<<data[i].rollno<<endl;
		cout<<"Name: "<<data[i].name<<endl;
		cout<<"CGPA: "<<data[i].cgpa<<"\n\n";
	}
	return 0;
}
