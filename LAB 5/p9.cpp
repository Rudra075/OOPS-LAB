#include <iostream>
using namespace std;

void inspect(int x) {
    cout << x << endl;
}

void inspect(int *p) {
    cout << *p << endl;
}

void inspect(int *p, int n) {
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

int main() {
    int x, n;

    cin >> x;
    inspect(x);

    int *p = &x;
    inspect(p);

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    inspect(a, n);

    return 0;
}