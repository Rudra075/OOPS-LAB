#include <iostream>
using namespace std;

int process(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

float process(float a[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int process(int a[], int n, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];
    return sum;
}

int main() {
    int n, k;

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> k;

    int m;
    cin >> m;
    float b[m];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    cout << process(a, n) << endl;
    cout << process(b, m) << endl;
    cout << process(a, n, k) << endl;

    return 0;
}