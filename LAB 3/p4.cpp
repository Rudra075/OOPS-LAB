#include <iostream>
using namespace std;

int main()
{
    int n, x, pos = -1;

    cout << "Enter size: ";
    cin >> n;

    int *a = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Element found at position " << pos + 1 << endl;
    else
        cout << "Element not found" << endl;

    delete[] a;

    return 0;
}