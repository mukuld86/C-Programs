// write a program to find out the largest number from two variables using function template 
// if the first number is greater, then print its table
// if the second number is greater, then find out its square root
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
template<class T>
void Max(T a, T b){
	T max;
	max=(a>b?a:b);
	if(max == a){
		for(int i=1;i<11;i++){
			cout<<max<<" * "<<i<<" = "<<max*i<<endl;
		}
	}
	else{
		cout<<"Square root of "<<max<<" = "<<fixed<<setprecision(2)<<sqrt(max)<<endl;
	}
}
int main(){
	int a,b;
	cout<<"Enter two integers: ";
	cin>>a>>b;
	cout<<"case 1\n";
	Max<int>(a,b);
	cout<<"case 2\n";
	Max<int>(b,a);
	return 0;
}
