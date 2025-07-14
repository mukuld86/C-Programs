// write a program to calculate the simple interest using DMA and whatever the interest will be calculated, print its table

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int time,amount,*si,rate,interest;
	cout<<"Enter amount: ";
	cin>>amount;
	cout<<"Enter time period: ";
	cin>>time;
	cout<<"Enter interest rate: ";
	cin>>rate;
	interest= amount * time * rate;
	si=&interest;
	cout<<"\nSimple interest = "<<*si<<endl;
	for(int i=1;i<=10;i++){
		cout<<*si<<" * "<<i<<" = "<<*si * i<<endl;
	}
	return 0;
}
