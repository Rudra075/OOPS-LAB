#include <iostream>
using namespace std;

int information(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int information(char str[], char ch) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            count++;

    return count;
}

int information(char str[], char ch, int k) {
    int count = 0;

    for (int i = 0; i < k && str[i] != '\0'; i++)
        if (str[i] == ch)
            count++;

    return count;
}

int main() {
    char str[100], ch;
    int k;

    cin >> str >> ch >> k;

    cout << information(str) << endl;
    cout << information(str, ch) << endl;
    cout << information(str, ch, k) << endl;

    return 0;
}