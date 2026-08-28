#include <iostream>
using namespace std;

void update(int &x, int value) {
    x += value;
}

void update(float &x, float value) {
    x += value;
}

void update(int a[], int n, int value) {
    for (int i = 0; i < n; i++)
        a[i] += value;
}

int main() {
    int x, n, value;
    float y;

    cin >> x >> value;
    update(x, value);
    cout << x << endl;

    cin >> y >> value;
    update(y, value);
    cout << y << endl;

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> value;

    update(a, n, value);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}