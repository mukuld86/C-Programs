#include<iostream>
#include<stdlib.h>
using namespace std;
class Employee{
	int id;
	float salary;
	public:
		void input(){
			cout<<"\nEnter id: ";
			cin>>id;
			cout<<"\nEnter salary: ";
			cin>>salary;
		}
		void display(){
			cout<<"\nId: "<<id<<", Salary: "<<salary<<endl;
		}
};
int main(){
	int n;
	cout<<"Enter number of employees: ";
	cin>>n;
	Employee *p=new Employee[n];
	Employee *d=p;
	Employee *flag=p;
	if(p==NULL){
		cout<"Memory allocation failure!";
		exit(1);
	}
	for(int i=0;i<n;i++){
		p->input();
		p++;
	}
	for(int i=0;i<n;i++){
		d->display();
		d++;
	}
	delete []flag;
}
