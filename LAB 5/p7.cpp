#include <iostream>
#include <cmath>
using namespace std;

int nearValue(int a, int b) {
    return abs(a) < abs(b) ? a : b;
}

float nearValue(float a, float b) {
    return abs(a) < abs(b) ? a : b;
}

int nearValue(int a[], int n) {
    int ans = a[0];

    for (int i = 1; i < n; i++)
        if (abs(a[i]) < abs(ans))
            ans = a[i];

    return ans;
}

int main() {
    int a, b, n;

    cin >> a >> b;

    float x, y;
    cin >> x >> y;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << nearValue(a, b) << endl;
    cout << nearValue(x, y) << endl;
    cout << nearValue(arr, n) << endl;

    return 0;
}