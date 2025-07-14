#include<iostream>
using namespace std;
template<class T>
class abc{
	T a,b;
	public:
		abc(T x, T y){
			a=x;
			b=y;
		}
		T max1(){
			return (a>b?a:b);
		}
};

int main(){
	abc<int>obj1(10,20);
	cout<<"Max value is "<<obj1.max1()<<endl;
	
	abc<float>obj2(10.2,34.7);
	cout<<"Max value is "<<obj2.max1()<<endl;
	
	abc<char>obj3('A','a');
	cout<<"Max value is "<<obj3.max1()<<endl;
	
	return 0;
}
