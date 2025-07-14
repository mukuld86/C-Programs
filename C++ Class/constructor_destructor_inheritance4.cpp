#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
		A(int r, int s){
			x=r; y=s;
			cout<<"Calling base class A constructor: "<<x<<" "<<y<<endl;
		}
		~A(){
			cout<<"Calling base class A destructor.\n";
		}
};
class B:public A{
	int l,m;
	public:
		B(int p, int q, int r, int s):A(r,s){
			l=p;
			m=q;			
			cout<<"Calling derived class B constructor: "<<l<<" "<<m<<endl;
		}
		~B(){
			cout<<"Calling derived class B destructor.\n";
		}
};
class C:public B{
	int n,m;
	public:
		C(int u, int v, int p, int q, int r, int s):B(p,q,r,s){
			n=u;
			m=v;
			cout<<"Calling derived class C constructor: "<<n<<" "<<m<<endl;
		} 
		~C(){
			cout<<"Calling derived class C destructor\n";
		}
};

int main(){
	C obj1(1,2,3,4,5,6);
	return 0;
}
