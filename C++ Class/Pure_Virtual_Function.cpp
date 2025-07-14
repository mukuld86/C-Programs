#include<iostream>
using namespace std;
class sample{
	public:
		virtual void table()=0;
		void show(){
			cout<<"\nIn sample abstract class\n";
		}
};
class derived1:public sample{
	public:
		void table(){
			int n;
			cout<<"Enter a number: ";
			cin>>n;
			cout<<endl;
			for(int i=1;i<=10;i++){
				cout<<n<<" * "<<i<<"  =  "<<n*i<<endl;			
			}
		}
};
int main(){
	sample *ptr;
	derived1 obj1;
	ptr=&obj1;
	ptr->table();
	ptr->show();
	return 0;
}
