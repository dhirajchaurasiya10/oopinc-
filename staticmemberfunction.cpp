#include<iostream>
#include<conio.h>
using namespace std;

class book {
    static int count;
public:
    static int getcount() {
        return count;
    }
    static int increasecount() {
        count++;
        return count; // Add this line to return the updated count
    }
};

int book::count;

int main() {
    cout << "Initial value: " << book::getcount() << endl;
    book b1, b2, b3;
    book::increasecount();
    book::increasecount();
    book::increasecount();
    book::increasecount();
    cout << "Final value: " << book::getcount() << endl;
    getch(); // Using getch() to hold the console window open
    return 0;
}
