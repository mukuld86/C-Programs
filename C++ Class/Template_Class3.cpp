#include<iostream>
using namespace std;
template<class T>
class alpha{
	protected:
		T a;
	public:
		void check(){
			cout<<"Hello\n";
		}
};
template<class T, class T1>
class beta: public alpha<T>{
	private:
		T1 b;
	public:
		void get(){
			cin>>alpha<T>::a>>b;
		}
		void display(){
			cout<<"a = "<<alpha<T>::a<<"\nb = "<<b<<endl;
			alpha<T>::check();
		}
};
int main(){
	beta<int, float> b1;
	beta<float, int> b2;
	cout<<"\nEnter an integer and a float: ";
	b1.get();
	b1.display();
	cout<<"\nEnter a float and an integer: ";
	b2.get();
	b2.display();
	
	return 0;
}
