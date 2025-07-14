#include<iostream>
using namespace std;
template <class T>
T find_sum(T arr[],int n){
	T sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
int main(){
	int arr1[]={1,2,3,4,5};
	double arr2[]={1.5,2.5,3.5,4.5,5.5};
	cout<<"Sum of integer array: "<<find_sum<int>(arr1,5)<<endl;
	cout<<"Sum of double array: "<<find_sum<double>(arr2,5)<<endl;
	return 0;
}
