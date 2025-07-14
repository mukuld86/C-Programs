#include<iostream>
using namespace std;
class M{
	protected:
		int m;
	public:
		M(int x){
			m=x;
			cout<<"In Class M\n";
		}
};
class N{
	protected:
		int n;
	public:
		N(int y){
			n=y;
			cout<<"In Class N\n";
		}
};
class P:public N, public M{
	int I;
	public:
		P(int p, int q, int r):M(r), N(q){
			I=p;
			cout<<"In class P\n";
		}
		void display(){
			cout<<"m = "<<m<<", n = "<<n<<", I = "<<I<<endl;
		}
};
int main(){
	P obj1(3,2,1);
	obj1.display();
	return 0;
}
