#include <iostream>
using namespace std;

class Duration {
    int hours, minutes;

public:
    Duration(int h, int m) {
        hours = h;
        minutes = m;
    }

    Duration operator+(Duration d) {
        int total = hours * 60 + minutes
                  + d.hours * 60 + d.minutes;

        return Duration(total / 60, total % 60);
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Duration d1(2, 45), d2(1, 30);

    cout << "First duration: ";
    d1.display();

    cout << "Second duration: ";
    d2.display();

    Duration d3 = d1 + d2;

    cout << "Total duration: ";
    d3.display();

    return 0;
}