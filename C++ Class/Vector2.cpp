#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v1;
	cout<<v1.size()<<endl;
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(2);
	v1.push_back(1);
	cout<<"Size of vector = "<<v1.size()<<endl;
	cout<<"Elements in vector are: ";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	v1.pop_back();
	cout<<"Elements in vector are: ";
	for(int i=0; i<v1.size(); i++){
		cout<<v1[i]<<" ";
	}
	cout<<"\nUsing iterator for displaying\n";
	vector<int>::iterator it;
	for(it=v1.begin(); it!=v1.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	v1.push_back(8);
	v1.push_back(9);
	for(it=v1.begin(); it!=v1.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	it=v1.begin();
	it++;
	it++;
	v1.insert(it,15);
	cout<<"After insertion: ";
	for(it=v1.begin(); it!=v1.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	v1.erase(v1.begin()+4,v1.end());   // second parameter is used in case of deleting multiple elements in a range
	cout<<"After deletion:  ";
	for(it=v1.begin(); it!=v1.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl<<"Size of v1 = "<<v1.size();
	v1.clear();
	cout<<endl<<"Size of v1 = "<<v1.size();
	
	return 0;
	
}
