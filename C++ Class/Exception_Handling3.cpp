// write a program to handle the exception division by zero and array index out of bound using try and catch block

#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter two numbers: ";
	cin>>n>>m;
	int x=n-m;
	int arr[]={1,2,3,4,5,6,7};
	try{
		if(x==0){
			throw x;
		}
		else{
			cout<<"Result (n/x) = "<<n/x<<endl;
		}
		for(int i=0; i<10; i++){
			cout<<arr[i]<<" ";
			if(i>6)
				throw 'e';
		}
	}
	catch(int i){
		cout<<"Zero division error\n";
	}
	catch(char ch){
		cout<<"Array index out of bounds\n";
	}
	
	return 0;
}
