#include<iostream>
using namespace std;
template<class T>
T square(T a){
	return a*a;
}
int main(){
	cout<<"Square of 2 is "<<square<int>(2)<<endl;
	cout<<"Square of 2.5 is "<<square<double>(2.5)<<endl;
	return 0;
}
