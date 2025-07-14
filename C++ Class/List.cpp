#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l){
	list<int>::iterator p;
	for(p=l.begin(); p!=l.end(); p++){
		cout<<*p<<" ";
	}
	cout<<endl;
}
int main(){
	list<int> list1;
	list<int> list2(5);
	for(int i=0;i<3;i++){
		list1.push_back(i);
	}
	cout<<"Displaying first list: ";
	display(list1);
	list<int>::iterator p;
	for(p=list2.begin(); p!=list2.end(); p++){
		*p=1;
	}
	cout<<"Displaying second list: ";
	display(list2);
	cout<<"Pushing element 100 at front:\n";
	list1.push_front(100);
	cout<<"Displaying first list after pushing 100: ";
	display(list1);
	cout<<"Popping element from front:\n";
	list2.pop_front();
	cout<<"Displaying second list after popping: ";
	display(list2);
	cout<<"Sorting first list:\n";
	list1.sort();
	cout<<"Displaying first list after sorting: ";
	display(list1);
	cout<<"Sorting second list:\n";
	list2.sort();
	cout<<"Displaying second list after sorting: ";
	display(list2);
	cout<<"Merging lists:\n";
	list1.merge(list2);
	cout<<"Displaying merged list:\n";
	display(list1);
	cout<<"Reversing list 1:\n";
	list1.reverse();
	cout<<"Displaying reversed List: ";
	display(list1);	
}
