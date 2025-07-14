#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *ptr;
	{
		int v=24;
		ptr=&v;
		cout<<"Address is(inside block): "<<ptr<<endl;
	}
	cout<<"Address is(outside block): "<<ptr;
	ptr=NULL;
	return 0;
}
