#include<iostream>
using namespace std;
class book{
	static int count;
	public:
		static int getcount(){
			return count;
		}
		static void increasecount() {
			count++;
		}
};
int book::count;
int main(){
	cout<<"initial value"<<book::getcount()<<endl;
	book b1,b2,b3;
	book::increasecount();
	book::increasecount();
	book::increasecount();
	book::increasecount();
	cout<<"final value"<<book::getcount()<<endl;
}
