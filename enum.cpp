#include<iostream>
#include<conio.h>
using namespace std;
//class all{
//	private:
//		char name[50];
//		char color[50];
//	public:
//		void readdata() {
//			cout<<"enter animal name"<<" ";
//			cin>>name;
//			cout<<"enter color"<<" ";
//			cin>>color;
//		}
//		void display() {
//			cout<<"name is:\t"<<name<<endl;
//			cout<<"color is:\t"<<color<<endl;
//			
//		}
//
//};
int sum(int a, int b)
{
	return a+b;
}
int sum(int c, int d, int e)
{
	return c+d+e;
}
int sum(double f, float g, int h)
{
	return f+g+h;
}
main()
{
	cout<<sum(5,6,7)<<endl;
	cout<<sum(8,2)<<endl;
	cout<<sum(12,5.5,7)<<endl;
	
	
	
	/* below are the commands for class all*/
//	all a;
//	a.readdata();
//	a.display();
//	system("cls");
	
	
	/*enum examples*/
//	enum shape {
//		Triangle=19, Circle, Rectangle, Square
//	};
//	cout<<"Assigned codes are:";
//	cout<<Triangle<<" "<<Circle<<" "<<Rectangle<<" "<<Square<<""<<endl;
//	enum color{red,blue,white,yellow
//	};
//	cout<<red<<" "<<blue<<" "<<yellow<<" ";
}
