#include<iostream>
using namespace std;
enum seasons{spring=34,summer=4,autumn=9,winter=32,NewOne};
int main()
{
	seasons s;
	s=NewOne;
	cout<<"NewOne = "<<s<<endl;
	
	return 0;
}
