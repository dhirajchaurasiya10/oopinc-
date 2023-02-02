#include<iostream>
#include<conio.h>
using namespace std;
class book{
	private:
		static int cn;
		char name[50];
		int id;
		public: 
		void readdata() {
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"name of book"<<endl;
			cin>>name;
			cn++;
		}
		void display()
		{
			cout<<endl<<id<<"\t"<<name;
		}
		void displaycount() {
			cout<<"the no of object"<<endl<<cn;
		}
};
int book::cn;
int main(){
	book b1,b2,b3;
	system("cls");
	b1.readdata();
	b1.displaycount();
	
	b2.readdata();
	b2.displaycount();
	
	b3.readdata();
	b3.displaycount();
	
	cout<<endl<<"id\t"<<"name";
	b1.display();
	b2.display();
	b3.display();
}
