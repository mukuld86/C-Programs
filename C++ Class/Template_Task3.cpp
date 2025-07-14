#include<iostream>
using namespace std;
template <class T>
void check(T n){
	if( n % 2 == 0){
		cout<<n<<" is even!\n";
	}
	else{
		cout<<n<<" is odd\n";
	}
	return;
	
}
int main(){
	check<int>(2);
	check<char>('A');
	check<char>('B');
	
	return 0;
}
