#include<iostream>
#include<conio.h>
using namespace std;
class shape{
	protected:
		int width,height;
		public:
			void read(int a,int b){
				width=a;
				height=b;
			}
};
class rectangle: public shape{
	public:
		int area() {
			return width*height;
		}
};
class Triangle: public shape{
	public:
		int area() {
			return (width*height)/2;
		}
};
int main() {
	rectangle r;
	Triangle tr;
	r.read(4,2);
	tr.read(5,4);
	cout<<"area of rectangle"<<r.area()<<endl;
	cout<<"area of triangle"<<tr.area();
}
