#include<iostream>
#include<conio.h>
//function overriding
using namespace std;
class person{
	protected:
		char name[20];
		public:
			void read(){
				cout<<"enter name"<<endl;
				cin>>name;
			}
			void display(){
				cout<<"name"<<name<<endl;
			}
};
class student : public person{
	int roll;
	public:
		void read(){
			cout<<"enter roll no"<<endl;
			cin>>roll;
		}
		void display(){
			cout<<"roll no"<<roll<<endl;
		}
};
int main(){
	student st;
	st.person::read();
	st.read();
	cout<<"--Records--"<<endl;
	st.person::display();
	st.display();
}
