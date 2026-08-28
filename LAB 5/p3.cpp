#include <iostream>
using namespace std;

void check(int n) {
    if (n > 0)
        cout << "Positive\n";
    else if (n < 0)
        cout << "Negative\n";
    else
        cout << "Zero\n";
}

void check(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase\n";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase\n";
    else
        cout << "Not a letter\n";
}

void check(char arr[], int n, char x) {
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Found\n";
    else
        cout << "Not Found\n";
}

int main() {
    int n, size;
    char ch, x;

    cin >> n;
    cin >> ch;

    cin >> size;
    char arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> x;

    check(n);
    check(ch);
    check(arr, size, x);

    return 0;
}