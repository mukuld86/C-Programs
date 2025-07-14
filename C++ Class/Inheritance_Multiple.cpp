#include<iostream>
using namespace std;
class M{
	protected:
		int m;
	public:
		void get_m(int x){
			m=x;
		}
};
class N{
	protected:
		int n;
	public:
		void get_n(int x){
			n=x;
		}
};
class O{
	protected:
		int o;
	public:
		void get_o(int x){
			o=x;
		}
};
class P:public M, public N, public O{
	public:
		void display(){
			cout<<"m = "<<m<<endl;
			cout<<"n = "<<n<<endl;
			cout<<"o = "<<o<<endl;
			cout<<"m * n * o = "<<m*n*o<<endl;
		}
};

int main(){
	P p;
	p.get_m(10);
	p.get_n(20);
	p.get_o(30);
	p.display();
	return 0;
}
