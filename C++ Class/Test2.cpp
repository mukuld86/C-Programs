#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int size;
    cout<<"Enter no. of elements to insert array: ";
    cin>>size;
    vector<int>vec1;
    cout<<"Enter "<<size<<" elements to insert: ";
    for(int i=0; i<size; i++){
        int element;
        cin>>element;
        vec1.push_back(element);
    }   
    display(vec1);
    vec1.insert(vec1.end()-1,55);
    display(vec1);
    cout<<vec1.at(2);
	return 0;
}
