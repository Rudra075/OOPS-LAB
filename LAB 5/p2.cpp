#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int side, length, breadth;
    double radius;

    cin >> side >> length >> breadth >> radius;

    cout << area(side) << endl;
    cout << area(length, breadth) << endl;
    cout << area(radius) << endl;

    return 0;
}