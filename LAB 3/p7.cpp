#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter size: ";
    cin >> n;

    cin.ignore();

    char *a = new char[n];

    cout << "Enter a string: ";
    cin.getline(a, n);

    for (int i = 0; a[i] != '\0'; i++)
    {
        char ch = a[i];

        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch))
            digits++;
        else if (ch == ' ')
            spaces++;
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits << endl;
    cout << "Spaces = " << spaces << endl;

    delete[] a;

    return 0;
}