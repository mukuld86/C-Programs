// write a program to ask the user to enter 10 integers, 10 float numbers and 10 characters using array
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	int int_arr[10],sum=0;
	float float_arr[10];
	char char_arr[10];
	cout<<"Enter 10 Integers: ";
	for(int i=0;i<10;i++){
		cin>>int_arr[i];	
		sum+=int_arr[i];
	}
	/*
	cout<<"Enter 10 Float numbers: ";
	for(int i=0;i<10;i++){
		cin>>float_arr[i];	
	}
	cout<<"Enter 10 Characters: ";
	for(int i=0;i<10;i++){
		cin>>char_arr[i];	
	}
	cout<<"Integers are: ";
	for(int i=0;i<10;i++){
		cout<<int_arr[i]<<" ";
	}
	cout<<endl;
		cout<<"Float numbers are: ";
	for(int i=0;i<10;i++){
		cout<<float_arr[i]<<" ";
	}
	cout<<endl;
		cout<<"Characters are: ";
	for(int i=0;i<10;i++){
		cout<<char_arr[i]<<" ";
	}
	cout<<endl;
	*/
	cout<<"Integers sum: "<<sum<<endl;

	getch();
	return 0;
}
