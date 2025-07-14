//	write a program to ask the user enter 5 roll numbers and 5 names using DMA

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int size;
	int *int_arr;
	string *str_arr;
	cout<<"Enter no. of Students: ";
	cin>>size;
	int_arr=new int[size];
	str_arr=new string[size];
	cout<<"\nEnter "<<size<<" Roll numbers: ";
	for(int i=0;i<size;i++){
		cin>>*(int_arr+i);
	}
	cout<<"\nEnter "<<size<<" names: ";
	for(int i=0;i<size;i++){
		cin>>*(str_arr+i);
	}
	cout<<"\n\nName\t\tRoll number\n";
	for(int i=0;i<size;i++){
		cout<<*(int_arr+i)<<"\t\t"<<*(str_arr+i)<<endl;
	}
	return 0;
}
