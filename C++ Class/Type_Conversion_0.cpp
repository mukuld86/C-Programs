//basic type to class
#include<iostream>
using namespace std;
class time{
	public:
		int hrs;
		time(int t){
			hrs=t/60;
		}
};
int main(){
	time t1(85);
	cout<<t1.hrs;
	return 0;
}
