#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;

    cout << "Enter size: ";
    cin >> n;

    int *a = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    delete[] a;

    return 0;
}