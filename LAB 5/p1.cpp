#include <iostream>
using namespace std;

int convert(int km) {
    return km * 1000;
}

int convert(double km) {
    return km * 1000;
}

double convert(float m, char) {
    return m * 100;
}

int main() {
    int km;
    double d;
    float m;

    cin >> km >> d >> m;

    cout << convert(km) << " meters\n";
    cout << convert(d) << " meters\n";
    cout << convert(m, 'c') << " centimeters\n";

    return 0;
}