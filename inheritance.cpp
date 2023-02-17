#include<iostream>
#include<conio.h>
using namespace std;
//single inheritance
class person{
	protected:
		char name[20];
		int age;
		public:
			void readdata(){
				cout<<"enter name"<<endl;
				cin>>name;
				cout<<"enter age"<<endl;
				cin>>age;
			}
			void displaydata() {
				cout<<"\nname: "<<name<<endl;
				cout<<"age:  "<<age<<endl;
			}
};
class employee:public person{
	char design[20];
	int salary;
	public:
		void read(){
			readdata();
			cout<<"enter designation"<<endl;
			cin>>design;
			cout<<"enter salary"<<endl;
			cin>>salary;
			
		}
		void display(){
			cout<<"person details"<<endl;
			displaydata();
			cout<<"designation"<<design<<endl;
			cout<<"salary"<<salary;
		}
};
int main() {
	employee emp;
	emp.read();
	emp.display();
}
