#include <iostream>
using namespace std;

void swapData(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapData(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void swapData(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    float x, y;
    int p, q;

    cin >> a >> b;
    cin >> x >> y;
    cin >> p >> q;

    swapData(a, b);
    swapData(x, y);
    swapData(&p, &q);

    cout << a << " " << b << endl;
    cout << x << " " << y << endl;
    cout << p << " " << q << endl;

    return 0;
}