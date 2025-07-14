#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1(10);
	cout<<"Size of vector is: "<<v1.size()<<endl;
	for(int i=0;i<10;i++){
		v1[i]=i;
	}
	for(int i=10;i<20;i++){
		v1.push_back(i);
	}
	cout<<"Size is: "<<v1.size()<<endl;
	for(int i=0;i<20;i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	v1.pop_back();
	v1.pop_back();
	cout<<"Size is: "<<v1.size()<<endl;
	vector<int>::iterator v=v1.begin();
	while(v!=v1.end()){
		cout<<*v<<" ";
		v++;
	}
	return 0;
}
