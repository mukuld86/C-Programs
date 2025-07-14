#include<iostream>
using namespace std;
class M{
	protected:
		int m;
	public:
		M(int x){
			m=x;
			cout<<"In M\n";
		}
};
class N:public M{
	protected:
		int n;
	public:
		N(int y):M(y){
			n=y;
			cout<<"In N\n";
		}
};
class P:public M{
	int I;
	public:
		P(int p):M(p){
			I=p;
			cout<<"In P\n";
		}
};
int main(){
	N obj1(1);
	P obj2(2);
	
	return 0;
}
