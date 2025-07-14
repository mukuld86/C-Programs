#include<iostream>
using namespace std;
template<class T>
void swap1(T &a, T &b){
	T temp=a;
	a=b;
	b=temp;
}

int main(){
	int inum1 = 4, inum2 = 5;
	float fnum1 = 4.8, fnum2 = 5.3;
	char c1 = 'A', c2 = 'a';
	cout<<"Before swapping:\n";
	cout<<"inum1 = "<<inum1<<"\t inum2 = "<<inum2<<endl;
	cout<<"fnum1 = "<<fnum1<<"\t fnum2 = "<<fnum2<<endl;
	cout<<"c1 = "<<c1<<"\t c2 = "<<c2<<endl;
	swap1<int>(inum1, inum2);
	swap1<float>(fnum1, fnum2);
	swap1<char>(c1, c2);
	cout<<"After swapping:\n";
	cout<<"inum1 = "<<inum1<<"\t inum2 = "<<inum2<<endl;
	cout<<"fnum1 = "<<fnum1<<"\t fnum2 = "<<fnum2<<endl;
	cout<<"c1 = "<<c1<<"\t c2 = "<<c2<<endl;
	
	return 0;
}
