//To display the first non repeating element from the array;

#include<iostream>
using namespace std;

int main()
{
int*size=new int;
cout<<"Enter the size of array: ";

cin>>*size;

int *arr = new int[*size];

cout<<"Enter the elements of the array: ";
for(int i =0; i< *size; i++)
{
cin>>*(arr+i);
}

cout<<"Entered array is: ";

for(int i=0; i<*size ;i++)
{
cout<<*(arr+i);
}

for(int i=0; i<*size ; i++)
{
int j=0;
for(j=0; j<*size;j++)
{
if(arr[i] == arr[j] && i != j)
{
break;
}
}
if(j == *size)
{
cout<<"First non repeating element is: "<<arr[i];
}
}
return 0;
}
