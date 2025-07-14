// write a program to ask the user to enter five subject marks. Calculate the total then print it using with return type and with parameter, without return type and with parameters. 

#include<iostream>
using namespace std;

float TotalMarks(float, float, float, float, float);
void Total_Marks(float, float, float, float, float);
int main()
{
	cout<<"Student 1: Using return with arguments!\n";
	float s1,s2,s3,s4,s5,t1;
	cout<<"Enter five subject marks: ";
	cin>>s1>>s2>>s3>>s4>>s5;
	t1=TotalMarks(s1,s2,s3,s4,s5);
	cout<<"Total Marks: "<<t1<<endl<<endl;
	
	cout<<"Student 2: Using arguments without return !\n";
	float s6,s7,s8,s9,s10,t2;
	cout<<"Enter five subject marks: ";
	cin>>s6>>s7>>s8>>s9>>s10;
	cout<<"Total Marks: "<<TotalMarks(s6,s7,s8,s9,s10)<<endl<<endl;
	return 0;
}

float TotalMarks(float a, float b, float c, float d, float e)
{
	float sum=a+b+c+d+e;
	return sum;
}

void Total_Marks(float a, float b, float c, float d, float e)
{
	float sum=a+b+c+d+e;
	cout<<sum;	
}

