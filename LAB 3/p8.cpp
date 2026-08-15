#include <iostream>
using namespace std;

void input(int *a, int n)
{
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int sum(int *a, int n)
{
    int s = 0;

    for (int i = 0; i < n; i++)
        s += a[i];

    return s;
}

int smallest(int *a, int n)
{
    int small = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] < small)
            small = a[i];

    return small;
}

int largest(int *a, int n)
{
    int large = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] > large)
            large = a[i];

    return large;
}

void display(int *a, int n)
{
    cout << "Sum = " << sum(a, n) << endl;
    cout << "Smallest = " << smallest(a, n) << endl;
    cout << "Largest = " << largest(a, n) << endl;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int *a = new int[n];

    input(a, n);
    display(a, n);

    delete[] a;

    return 0;
}