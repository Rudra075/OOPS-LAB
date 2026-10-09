#include <iostream>
using namespace std;

class Temperature {
    float celsius;

public:
    Temperature(float c) {
        celsius = c;
    }

    bool operator>(Temperature t) {
        return celsius > t.celsius;
    }

    bool operator<(Temperature t) {
        return celsius < t.celsius;
    }

    Temperature operator-() {
        return Temperature(-celsius);
    }

    void display() {
        cout << celsius << " degree Celsius" << endl;
    }
};

int main() {
    Temperature t1(35), t2(25);

    cout << "Temperature 1: ";
    t1.display();

    cout << "Temperature 2: ";
    t2.display();

    cout << "t1 > t2: " << (t1 > t2) << endl;
    cout << "t1 < t2: " << (t1 < t2) << endl;

    Temperature t3 = -t1;

    cout << "Negative temperature: ";
    t3.display();

    return 0;
}