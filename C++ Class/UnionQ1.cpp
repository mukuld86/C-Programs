#include<iostream>
using namespace std;
union employee
{
	char name[50];
	int age;
	float salary;
};

int main()
{
	employee e1;
	cout<<"Enter full name: ";
	cin.get(e1.name,50);
	cout<<"Name: "<<e1.name<<endl;
	cout<<"Enter age: ";
	cin>>e1.age;
	cout<<"Age: "<<e1.age<<endl;
	cout<<"Enter salary: ";
	cin>>e1.salary;
	cout<<"Salary: "<<e1.salary<<endl;
	
	return 0;
}
