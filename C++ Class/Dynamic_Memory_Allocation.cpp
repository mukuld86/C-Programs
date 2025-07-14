#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int *p=NULL;
	p = new int;
	if(!p){
		cout<<"Memory not allocated!\n";
		exit(1);
	}
	cout<<"Memory Allocated\n";
	*p=12;
	cout<<"Integer value: "<<*p<<endl;
	*p += 10;
	cout<<"Addition result: "<<*p<<endl;
	delete p;
	cout<<"Memory de-allocated\n";
	getch();
	system("cls");
	getch();
	return 0;
}
