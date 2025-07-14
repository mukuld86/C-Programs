#include<iostream>
using namespace std;
class Number{
	int x,y,z;
	public:
		Number(int n1,int n2,int n3){
			x=n1;y=n2;z=n3;
			cout<<"\nBefore overloading: ";
			cout<<"x: "<<x<<",y: "<<y<<",z: "<<z<<endl;
		}
		friend void operator-(Number);
};
void operator-(Number obj){
	cout<<"After overloading: ";
	cout<<"x: "<<-obj.x<<",y: "<<-obj.y<<",z: "<<-obj.z<<endl;
}
int main(){
	Number N(7,8,9);
	-N;
	return 0;	
}
