#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int key;
	int arr[]={ 12, 3, 17, 8, 34, 56, 9};
	vector<int>v(arr,arr+7);
	vector<int>::iterator iter;
	cout<<"Enter value: ";
	cin>>key;
	iter=find(v.begin(), v.end(), key);
	if(iter!=v.end()){
		cout<<"Element "<<key<<" found\n";
	}
	else{
		cout<<"Element "<<key<<" not in vector\n";
	}
	return 0;
}
