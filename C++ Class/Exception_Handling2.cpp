#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	try{
		int i=0;
		while(1){
			cout<<a[i]<<" ";
			i++;
			if(i==5)
				throw i;
		}
	}
	catch(int j){
		cout<<"\narray index out of bounds "<<j;
	}
	return 0;
}
