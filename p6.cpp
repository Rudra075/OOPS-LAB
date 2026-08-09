#include <iostream>
using namespace std;

class Time
{
private:
    int hours1, minutes1;
    int hours2, minutes2;
    int hours, minutes;

public:
    void input()
    {
        cout << "Enter first time:" << endl;
        cout << "Hours: ";
        cin >> hours1;
        cout << "Minutes: ";
        cin >> minutes1;

        cout << "Enter second time:" << endl;
        cout << "Hours: ";
        cin >> hours2;
        cout << "Minutes: ";
        cin >> minutes2;
    }

    void add()
    {
        minutes = minutes1 + minutes2;
        hours = hours1 + hours2;

        if (minutes >= 60)
        {
            hours = hours + minutes / 60;
            minutes = minutes % 60;
        }
    }

    void display()
    {
        cout << "Result = " << hours << " hours "
             << minutes << " minutes" << endl;
    }
};

int main()
{
    Time t;

    t.input();
    t.add();
    t.display();

    return 0;
}