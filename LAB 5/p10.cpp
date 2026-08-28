#include <iostream>
using namespace std;

double evaluate(int a, int b) {
    return (a + b) / 2.0;
}

double evaluate(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

double evaluate(float a, float b) {
    return (a + b) / 2.0;
}

double evaluate(int a[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return (double)sum / n;
}

double evaluate(int *a, int *b) {
    return (*a + *b) / 2.0;
}

int main() {
    int a, b, c, n;

    cin >> a >> b;
    cout << evaluate(a, b) << endl;

    cin >> c;
    cout << evaluate(a, b, c) << endl;

    float x, y;
    cin >> x >> y;
    cout << evaluate(x, y) << endl;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << evaluate(arr, n) << endl;

    cout << evaluate(&a, &b) << endl;

    return 0;
}