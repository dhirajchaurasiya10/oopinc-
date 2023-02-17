#include<iostream>
#include<conio.h>
using namespace std;
//hierarchial inheritance
class person{
	protected:
		char name[20];
		int age;
		public:
			void getperson(){
				cout<<"name"<<endl;
				cin>>name;
				cout<<"enter age"<<endl;
				cin>>age;
			}
			void displayperson(){
				cout<<"name"<<name<<endl;
				cout<<"age"<<age<<endl;
				
			}
};
class student:public person{
	int roll,marks;
	public:
		void getstudent(){
			cout<<"enter roll"<<endl;
			cin>>roll;
			cout<<"enter marks"<<endl;
			cin>>marks;
		}
		void displaystudent(){
			cout<<"roll"<<roll<<endl;
			cout<<"totalmarks"<<marks<<endl;
			
		}
};
class employee:public person{
	char design[20];
	int salary;
	public:
		void read(){
			
			cout<<"enter designation"<<endl;
			cin>>design;
			cout<<"enter salary"<<endl;
			cin>>salary;
			
		}
		void display(){
			cout<<"person details"<<endl;
			
			cout<<"designation"<<design<<endl;
			cout<<"salary"<<salary;
		}
};
int main(){
	student s;
	s.getperson();
	s.getstudent();
	
	employee e;
	e.getperson();
	e.read();
	
	cout<<"students record"<<endl;
	s.displayperson();
	s.displaystudent();
	
	cout<<"employee record"<<endl;
	e.displayperson();
	e.display();
}
