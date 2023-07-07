#include <iostream>
using namespace std;
class all
{
private:
    char name[50];
    char color[50];

public:
    void readdata()
    {
        cout << "enter animal name"
             << " ";
        cin >> name;
        cout << "enter color"
             << " ";
        cin >> color;
    }
    void display()
    {
        cout << "name is:\t" << name << endl;
        cout << "color is:\t" << color << endl;
    }
};
int main()
{
}